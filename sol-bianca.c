/* sol-bianca.m
 * An operating system.  This is the main startup file and such.  It is loaded
 * by sb-init.asm, which is loaded by GRUB.
 *
 * Simon Heath
 * 15/6/2003
 */

#include "sol-bianca.h"

char *todo = 
"   Make it actually do something.  Memory junkin would be nice too.  Keyboard handling, that type of thing";


static void initInterrupts();


void sbMain()
{
   int i;
   int data;
   sbClearScreen( BLACK_BKG );
   sbPrintln( "SOL BIANCA CORE LOADED", LBLUE_TXT | BLACK_BKG );
   sbPrintln( "Written by Simon Heath", STANDARD_TXT );
   sbPrintln( "Todo:", LWHITE_TXT | BLACK_BKG );
   sbPrintln( todo, LWHITE_TXT | BLACK_BKG );
   sbScroll( 1 );

   sbPrintln( "Roight, let's get this set up.", STANDARD_TXT );
   // We disable interrupts so nothing nasty happens.
   // Can't hurt...
   asm( "cli" );

   // Init programmable interrupt controllers
   initPics(); 
   // Init Interrupt Service Routine table
   initInterrupts();
   // Load Interrupt Descriptor Table
   initIDT();

   // Re-enable interrupts
   asm( "sti" );

   asm( "int $32" );
   asm( "int $33" );
   asm( "int $34" );
   asm( "int $35" );
   asm( "int $36" );
   asm( "int $37" );
   asm( "int $38" );
   asm( "int $39" );
   asm( "int $40" );
   asm( "int $41" );
   asm( "int $42" );
   asm( "int $43" );
   asm( "int $44" );
   asm( "int $45" );
   asm( "int $46" );
   asm( "int $47" );
   asm( "int $48" );

   sbPrintln( "Hangin' loose, baby.", STANDARD_TXT );
   while( 1 )
   {
      i = inb( 0x64 );
      if( i & 0x01 )
      {
         data = inb( 0x60 );
	 if( (i & 0xC0) == 0 )
	    sbPrintln( (char *) data, STANDARD_TXT );
      }
      
   }
   sbDeath( "sol-bianca.m, sbMain()", "End of program" );

}

// Prints an error message and stops.
// A kernel panic, to use the Linux term.
void sbDeath( char *file, char *text )
{
   sbPrintln( "KERNEL HAS DIED HORRIBLY:", ERROR_TXT );
   sbPrintln( file, ERROR_TXT );
   sbPrintln( text, ERROR_TXT );
   while( 1 )
   {
   }
}

// This is a test message; it takes no args to make life simple, and 'tis the
// sorta thing you stick into a program at different points to see where
// something is stopping/flipping out/murdering something else.
void sbErrorThang()
{
   sbPrintln( "The Thang has been called!", ERROR_TXT );
}


// Sets up all the interrupt handlers
static void initInterrupts()
{
   int i;
   addISR( handleInterrupt00, 0 );
   addISR( handleInterrupt01, 1 );
   addISR( handleInterrupt02, 2 );
   addISR( handleInterrupt03, 3 );
   addISR( handleInterrupt04, 4 );
   addISR( handleInterrupt05, 5 );
   addISR( handleInterrupt06, 6 );
   addISR( handleInterrupt07, 7 );
   addISR( handleInterrupt08, 8 );
   addISR( handleInterrupt09, 9 );
   addISR( handleInterrupt10, 10 );
   addISR( handleInterrupt11, 11 );
   addISR( handleInterrupt12, 12 );
   addISR( handleInterrupt13, 13 );
   addISR( handleInterrupt14, 14 );
   addISR( handleInterrupt15, 15 );
   addISR( handleInterrupt16, 16 );
   addISR( handleInterrupt17, 17 );
   addISR( handleInterrupt18, 18 );
   addISR( handleInterrupt19, 19 );
   addISR( handleInterrupt20, 20 );
   addISR( handleInterrupt21, 21 );
   addISR( handleInterrupt22, 22 );
   addISR( handleInterrupt23, 23 );
   addISR( handleInterrupt24, 24 );
   addISR( handleInterrupt25, 25 );
   addISR( handleInterrupt26, 26 );
   addISR( handleInterrupt27, 27 );
   addISR( handleInterrupt28, 28 );
   addISR( handleInterrupt29, 29 );
   addISR( handleInterrupt30, 30 );
   addISR( handleInterrupt31, 31 );
   addISR( handleInterrupt32, 32 );
   addISR( handleInterrupt33, 33 );
   addISR( handleInterrupt34, 34 );
   addISR( handleInterrupt35, 35 );
   addISR( handleInterrupt36, 36 );
   addISR( handleInterrupt37, 37 );
   addISR( handleInterrupt38, 38 );
   addISR( handleInterrupt39, 39 );
   addISR( handleInterrupt40, 40 );
   addISR( handleInterrupt41, 41 );
   addISR( handleInterrupt42, 42 );
   addISR( handleInterrupt43, 43 );
   addISR( handleInterrupt44, 44 );
   addISR( handleInterrupt45, 45 );
   addISR( handleInterrupt46, 46 );
   addISR( handleInterrupt47, 47 );
   addISR( handleInterrupt48, 48 );
   for( i = 49; i < 256; i++ )
      addISR( sbErrorThang, i );
   sbPrintln( "Interrupt handlers 0-48 enabled", LOWLEVEL_TXT );
}
