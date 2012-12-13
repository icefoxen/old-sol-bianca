/* 
 * This is the basic I/O printing functions and such for the kernel.
 *
 * Simon Heath
 * 14/6/2003
 */

#include "terminal-base.h"
#include "ll-base.h"


// This clears the screen.
void sbClearScreen( char color )
{
   char *vidmem = (char *) 0xb8000;
   unsigned int i = 0;

   while( i < (80 * 25 * 2 ) )
   {
      vidmem[i] = ' ';
      i++;
      vidmem[i] = color;
      i++;
   }
}

// This prints a message on a certain line, in a certain color.
void sbPrint( char *message, unsigned int line, char color )
{
   char *vidmem = (char *) 0xb8000;
   unsigned int i = 0;

   while( *message != (char) 0 )
   {
      *(vidmem + (line * 80 * 2)) = *message;
      *vidmem++;
      *(vidmem + (line * 80 * 2)) = color;
      vidmem++;
      message++;
   }
}

// This scrolls the screen down X lines.
void sbScroll( unsigned int lines )
{
   char *screen = (char *) 0xb8000;
   // Simply moves the lower 24 lines of the screen memory up a line...
   moveMem( screen + (lines * 80 * 2), screen, (25 * 80 * 2) );
   // And clears the last line.
   zeroMem( screen + (24 * 80 * 2), 80 * 2 );
}

// Prints out a message and scrolls
void sbPrintln( char *message, char color )
{
   sbPrint( message, 24, color );
   sbScroll( 1 );
   sbMoveCursor( 24, 0 );
}

void sbMoveCursor( int row, int col )
{
   unsigned short pos = (row * 80) + col;

   // I don't exactly understand what's going on here, just that
   // it's poking VGA card registers.
   outb( 0x0E, 0x3D4 );
   outb( (unsigned char) (pos >> 8), 0x3D5 );

   outb( 0x0F, 0x3D4 );
   outb( (unsigned char) pos, 0x3D5 );
}
