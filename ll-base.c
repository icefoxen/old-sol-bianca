/* Interface file so we can use ll-base.asm
 *
 * Simon Heath
 * 14/6/2003
 */


#include "ll-base.h"

// This inline asm stuff is stolen from an OS tutorial.
// I have no clue why these work and my asm interface doesn't.
// But that's the way it goes.  Grr.
int inb( unsigned short port )
{ 
   int ret_val;
   __asm__ __volatile__(
      "inb %w1, %b0" : "=a" (ret_val) : "d" (port) );
}

void outb( int value, unsigned short port )
{
   __asm__ __volatile__(
      "outb %b0, %w1" : : "a" (value), "d" (port) );
}
