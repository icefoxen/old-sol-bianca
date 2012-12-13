/* isrm.m
 * This handles the Interrupt Service Routines.  These things are called each
 * time an interrupt is recieved.
 * Right now they just print out a message.
 * Interrupts 00-16 are CPU EXCEPTIONS
 * Interrupts 17-31 are RESERVED by Intel
 * Interrupts 32-48 are IRQ's, as re-mapped by pic.m
 *
 * Simon Heath
 * 15/6/2003
 */

#include "isr.h"
#include "terminal-base.h"


// CPU EXCEPTIONS
 
void handleInterrupt00()
{
   
   sbPrintln( "Interrupt 00 recieved!  W00t!", LOWLEVEL_TXT );
   
} 

 
void handleInterrupt01()
{
   
   sbPrintln( "Interrupt 01 recieved!  W00t!", LOWLEVEL_TXT );
   
} 

 
void handleInterrupt02()
{
   
   sbPrintln( "Interrupt 02 recieved!  W00t!", LOWLEVEL_TXT );
   
} 

 
void handleInterrupt03()
{
   
   sbPrintln( "Interrupt 03 recieved!  W00t!", LOWLEVEL_TXT );
   
} 

 
void handleInterrupt04()
{
   
   sbPrintln( "Interrupt 04 recieved!  W00t!", LOWLEVEL_TXT );
   
} 

 
void handleInterrupt05()
{
   
   sbPrintln( "Interrupt 05 recieved!  W00t!", LOWLEVEL_TXT );
   
} 

 
void handleInterrupt06()
{
   
   sbPrintln( "Interrupt 06 recieved!  W00t!", LOWLEVEL_TXT );
   
} 

 
void handleInterrupt07()
{
   
   sbPrintln( "Interrupt 07 recieved!  W00t!", LOWLEVEL_TXT );
   
} 

 
void handleInterrupt08()
{
   
   sbPrintln( "Interrupt 08 recieved!  W00t!", LOWLEVEL_TXT );
   
} 

 
void handleInterrupt09()
{
   
   sbPrintln( "Interrupt 09 recieved!  W00t!", LOWLEVEL_TXT );
   
} 

 
void handleInterrupt10()
{
   
   sbPrintln( "Interrupt 10 recieved!  W00t!", LOWLEVEL_TXT );
   
} 

 
void handleInterrupt11()
{
   
   sbPrintln( "Interrupt 11 recieved!  W00t!", LOWLEVEL_TXT );
   
} 

 
void handleInterrupt12()
{
   
   sbPrintln( "Interrupt 12 recieved!  W00t!", LOWLEVEL_TXT );
   
} 

 
void handleInterrupt13()
{
   
   sbPrintln( "Interrupt 13 recieved!  W00t!", LOWLEVEL_TXT );
   
} 

 
void handleInterrupt14()
{
   
   sbPrintln( "Interrupt 14 recieved!  W00t!", LOWLEVEL_TXT );
   
} 

 
void handleInterrupt15()
{
   
   sbPrintln( "Interrupt 15 recieved!  W00t!", LOWLEVEL_TXT );
   
} 

 
void handleInterrupt16()
{
   
   sbPrintln( "Interrupt 16 recieved!  W00t!", LOWLEVEL_TXT );
   
} 


// RESERVED INTERRUPTS
 
void handleInterrupt17()
{
   
   sbPrintln( "Interrupt 17 recieved!  W00t!", LOWLEVEL_TXT );
   
} 

 
void handleInterrupt18()
{
   
   sbPrintln( "Interrupt 18 recieved!  W00t!", LOWLEVEL_TXT );
   
} 

 
void handleInterrupt19()
{
   
   sbPrintln( "Interrupt 19 recieved!  W00t!", LOWLEVEL_TXT );
   
} 

 
void handleInterrupt20()
{
   
   sbPrintln( "Interrupt 20 recieved!  W00t!", LOWLEVEL_TXT );
   
} 

 
void handleInterrupt21()
{
   
   sbPrintln( "Interrupt 21 recieved!  W00t!", LOWLEVEL_TXT );
   
} 

 
void handleInterrupt22()
{
   
   sbPrintln( "Interrupt 22 recieved!  W00t!", LOWLEVEL_TXT );
   
} 

 
void handleInterrupt23()
{
   
   sbPrintln( "Interrupt 23 recieved!  W00t!", LOWLEVEL_TXT );
   
} 

 
void handleInterrupt24()
{
   
   sbPrintln( "Interrupt 24 recieved!  W00t!", LOWLEVEL_TXT );
   
} 

 
void handleInterrupt25()
{
   
   sbPrintln( "Interrupt 25 recieved!  W00t!", LOWLEVEL_TXT );
   
} 

 
void handleInterrupt26()
{
   
   sbPrintln( "Interrupt 26 recieved!  W00t!", LOWLEVEL_TXT );
   
} 

 
void handleInterrupt27()
{
   
   sbPrintln( "Interrupt 27 recieved!  W00t!", LOWLEVEL_TXT );
   
} 

 
void handleInterrupt28()
{
   
   sbPrintln( "Interrupt 28 recieved!  W00t!", LOWLEVEL_TXT );
   
} 

 
void handleInterrupt29()
{
   
   sbPrintln( "Interrupt 29 recieved!  W00t!", LOWLEVEL_TXT );
   
} 

 
void handleInterrupt30()
{
   
   sbPrintln( "Interrupt 30 recieved!  W00t!", LOWLEVEL_TXT );
   
} 

 
void handleInterrupt31()
{
   
   sbPrintln( "Interrupt 31 recieved!  W00t!", LOWLEVEL_TXT );
   
} 

// HARDWARE IRQ INTERRUPTS, as re-mapped by pic.c

 
void handleInterrupt32()
{
   
   sbPrintln( "Interrupt 32 recieved!  W00t!", LOWLEVEL_TXT );
   
} 

 
void handleInterrupt33()
{
   
   sbPrintln( "Interrupt 33 recieved!  W00t!", LOWLEVEL_TXT );
   
} 

 
void handleInterrupt34()
{
   
   sbPrintln( "Interrupt 34 recieved!  W00t!", LOWLEVEL_TXT );
   
} 

 
void handleInterrupt35()
{
   
   sbPrintln( "Interrupt 35 recieved!  W00t!", LOWLEVEL_TXT );
   
} 

 
void handleInterrupt36()
{
   
   sbPrintln( "Interrupt 36 recieved!  W00t!", LOWLEVEL_TXT );
   
} 

 
void handleInterrupt37()
{
   
   sbPrintln( "Interrupt 37 recieved!  W00t!", LOWLEVEL_TXT );
   
} 

 
void handleInterrupt38()
{
   
   sbPrintln( "Interrupt 38 recieved!  W00t!", LOWLEVEL_TXT );
   
} 

 
void handleInterrupt39()
{
   
   sbPrintln( "Interrupt 39 recieved!  W00t!", LOWLEVEL_TXT );
   
} 

void handleInterrupt40()
{
   
   sbPrintln( "Interrupt 40 recieved!  W00t!", LOWLEVEL_TXT );
   
} 

void handleInterrupt41()
{
   
   sbPrintln( "Interrupt 41 recieved!  W00t!", LOWLEVEL_TXT );
   
} 

void handleInterrupt42()
{
   
   sbPrintln( "Interrupt 42 recieved!  W00t!", LOWLEVEL_TXT );
   
} 

void handleInterrupt43()
{
   
   sbPrintln( "Interrupt 43 recieved!  W00t!", LOWLEVEL_TXT );
   
} 

void handleInterrupt44()
{
   
   sbPrintln( "Interrupt 44 recieved!  W00t!", LOWLEVEL_TXT );
   
} 

void handleInterrupt45()
{
   
   sbPrintln( "Interrupt 45 recieved!  W00t!", LOWLEVEL_TXT );
   
} 

void handleInterrupt46()
{
   
   sbPrintln( "Interrupt 46 recieved!  W00t!", LOWLEVEL_TXT );
   
} 

void handleInterrupt47()
{
   
   sbPrintln( "Interrupt 47 recieved!  W00t!", LOWLEVEL_TXT );
   
} 

void handleInterrupt48()
{
   
   sbPrintln( "Interrupt 48 recieved!  W00t!", LOWLEVEL_TXT );
   
} 

