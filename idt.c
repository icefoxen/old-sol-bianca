/* idt.m
 * This is the interrupt descriptor table; this tells the CPU where to find
 * ISR's.
 * The ISR's are defined in isra.asm and isrm.m.  They're called on to handle
 * each interrupt; this just tells the CPU which ISR handles which interrupt.
 * Note that the Protected Mode exceptions fill the first 16 interrupts, 0x00
 * to 0x10.  I've mapped IRQ's (hardware interrupts) 0-15 to interrupts 0x20 to
 * 0x30 and it looks like I actually did it right; look at pic.m for details.
 * To figure out exactly how to do this it seems I also have to figure out what
 * the heck a GDT is.
 * Anyhoo, an interrupt descriptor is an 8-byte chunk of memory divvied up
 * thus:
 * HIGH                                                                LOW
 * |- Offset ------|    |- Constant -| |- Selector ----| |- Offset ------|
 * 00000000 00000000 00001110 00000000 00000000 00000000 00000000 00000000
 *          Present--^||
 *                    ||-Descriptor Privilage Level
 * If "present" != 1, an exception will occur.  The Decriptor Privilage Level
 * is 0 for real and 3 for protected mode, I think.  Selector is the code
 * selector that the ISR will use, whatever that means.  Offset is the address 
 * of the ISR; this is split into two words to be 286-compatable.
 *
 * Simon Heath
 * 15/6/2003
 */

#include "idt.h"
#include "terminal-base.h"

// These things can't be local variables, y'all.  It ain't nice to the poor
// assembly code.

// A pointer to the Interrupt Description Table; gets fed to the 'lidt'
// instruction to load the IDT
IDT_POINTER idt;

// The actual IDT, as an array of INTERRUPT structures.  Let's hope this works
// out right.
INTERRUPT IDT[256]; 


// This function takes a function pointer (yay Lisp!) and a number, and adds
// the respective thangs to the IDT table.
void addISR( void (*handler)(), char number )
{
   // Hmm.  What the heck is this?
   unsigned int selector = 0x08;
   // Grab the address of the function, yay!
   unsigned int offset = (unsigned int) handler;

   // And again, what the heck?
   // I'll just assume I need it, while I figure out what the selector does.
   asm volatile( "movw %%cs, %0" : "=g" (selector) );

   // This grabs the lower 2 bytes of the address...
   IDT[number].low_offset	= (short) offset;
   IDT[number].selector		= selector;
   // This is the settings section, which should be more or less constant.  I
   // mean, of course I'm gonna set the "present" bit, and the privilage level
   // should remain constant (level 3 is protected mode, I assume)
   // Let's try this with level 0 instead of 3... 3 is 0xEE00
   IDT[number].settings		= 0x8E00;
   // And this grabs the upper two bytes.
   IDT[number].high_offset	= (offset >> 16);

}


// And this loads the thang!
void initIDT()
{
   IDT_POINTER *idtptr = &idt;
   idt.limit = 256 * ( sizeof( INTERRUPT ) - 1 );
   idt.base  = IDT;

   // And we load the descriptor table pointer with lidt, which is a special
   // asm instruction specifically for that.
   // I really hate this asm syntax, it makes no sense whatsoever...
   asm volatile( "lidt (%0)" : : "p"  (idtptr) );

   sbPrintln( "Interrupt table loaded, baby!", LOWLEVEL_TXT );
}
