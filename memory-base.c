/* memory-base.m
 * Low-level memory-poking functions.
 * 
 * Simon Heath
 * 15/6/2003
 */

#include "memory-base.h"

// Clears a block of memory to zero.
int zeroMem( char *location, unsigned int length )
{
   int i;
   // This checks whether location + length is longer than the memory.
   // You could get in big trouble by accidentally wrapping around to 0
   // and stomping all over the lower meg or so of memory.
   if( (unsigned int) location + length < (unsigned int) location )
      return 0;
   else
   {
      for( i = 0; i < length; i++ )
      {
         *(location + i) = 0;
      }
      return 0;
   }
}


// Copies a not-too-big block of memory.
int moveMem( char *source, char *dest, unsigned int length )
{
   int i;
   // Find out which location is higher in memory...
   // This could cause some weirdness if source == dest, but if you're
   // copying a block of memory onto itself you need help anyway.  ^_^
   if( (unsigned int) source > (unsigned int) dest )
   {
      // If source is greater,
      // Find out if they wrap around
      if( (unsigned int) source + length < (unsigned int) source )
         return 0;

      // If everything's cool, we copy the stuff.
      // Here we copy from the beginning to the end.
      for( i = 0; i < length; i++ )
      {
         *(dest + i) = *(source + i);
      } 
   } 
   else
   {
      // else, dest is higher than source, so we do some different checks.
      // Find out if they wrap around
      if( (unsigned int) dest + length < (unsigned int) dest )
         return 0;
      // If everything's cool, we copy the stuff.
      // Here we copy from the end to the beginning, so they don't overlap.
      for( i = length - 1; i >= 0; i-- )
      {
         *(dest + i) = *(source + i);
      } 
   }
   return 1;
}
