; isra.asm
; Okay, it looks like we need to write an asm wrapper for the C
; ISR's.  That might explain why my comp spuriously resets when I try to
; call the thing...
; Interrupts 2 and 15 are Intel reserved...
; 
; Python rocks.
; -----
;import sys 
;sys.stdout = open( "foo.txt", "w" )
;for i in range( 40 ):
;   print """
;extern handleInterrupt%02d
;global int_handler%02d
;int_handler%02d:
;   pusha
;   push ds
;   push es
;   push fs
;   push gs
;
;   call handleInterrupt%02d
;
;   pop gs
;   pop fs
;   pop es
;   pop ds
;   popa
;   iret
;""" % (i, i, i, i)
; -----
;
; Simon Heath
; 16/6/2003

extern sbErrorThang


; Interrupts 00-16 are CPU EXCEPTIONS
; Interrupts 17-31 are RESERVED by Intel
; Interrupts 32-48 are IRQ's, as re-mapped by pic.m
extern handleInterrupt00
global int_handler00
int_handler00:
   pusha
   push ds
   push es
   push fs
   push gs

   call handleInterrupt00

   pop gs
   pop fs
   pop es
   pop ds
   popa
   iret


extern handleInterrupt01
global int_handler01
int_handler01:
   pusha
   push ds
   push es
   push fs
   push gs

   call handleInterrupt01

   pop gs
   pop fs
   pop es
   pop ds
   popa
   iret


extern handleInterrupt02
global int_handler02
int_handler02:
   pusha
   push ds
   push es
   push fs
   push gs

   call handleInterrupt02

   pop gs
   pop fs
   pop es
   pop ds
   popa
   iret


extern handleInterrupt03
global int_handler03
int_handler03:
   pusha
   push ds
   push es
   push fs
   push gs

   call handleInterrupt03

   pop gs
   pop fs
   pop es
   pop ds
   popa
   iret


extern handleInterrupt04
global int_handler04
int_handler04:
   pusha
   push ds
   push es
   push fs
   push gs

   call handleInterrupt04

   pop gs
   pop fs
   pop es
   pop ds
   popa
   iret


extern handleInterrupt05
global int_handler05
int_handler05:
   pusha
   push ds
   push es
   push fs
   push gs

   call handleInterrupt05

   pop gs
   pop fs
   pop es
   pop ds
   popa
   iret


extern handleInterrupt06
global int_handler06
int_handler06:
   pusha
   push ds
   push es
   push fs
   push gs

   call handleInterrupt06

   pop gs
   pop fs
   pop es
   pop ds
   popa
   iret


extern handleInterrupt07
global int_handler07
int_handler07:
   pusha
   push ds
   push es
   push fs
   push gs

   call handleInterrupt07

   pop gs
   pop fs
   pop es
   pop ds
   popa
   iret


extern handleInterrupt08
global int_handler08
int_handler08:
   pusha
   push ds
   push es
   push fs
   push gs

   call handleInterrupt08

   pop gs
   pop fs
   pop es
   pop ds
   popa
   iret


extern handleInterrupt09
global int_handler09
int_handler09:
   pusha
   push ds
   push es
   push fs
   push gs

   call handleInterrupt09

   pop gs
   pop fs
   pop es
   pop ds
   popa
   iret


extern handleInterrupt10
global int_handler10
int_handler10:
   pusha
   push ds
   push es
   push fs
   push gs

   call handleInterrupt10

   pop gs
   pop fs
   pop es
   pop ds
   popa
   iret


extern handleInterrupt11
global int_handler11
int_handler11:
   pusha
   push ds
   push es
   push fs
   push gs

   call handleInterrupt11

   pop gs
   pop fs
   pop es
   pop ds
   popa
   iret


extern handleInterrupt12
global int_handler12
int_handler12:
   pusha
   push ds
   push es
   push fs
   push gs

   call handleInterrupt12

   pop gs
   pop fs
   pop es
   pop ds
   popa
   iret


extern handleInterrupt13
global int_handler13
int_handler13:
   pusha
   push ds
   push es
   push fs
   push gs

   call handleInterrupt13

   pop gs
   pop fs
   pop es
   pop ds
   popa
   iret


extern handleInterrupt14
global int_handler14
int_handler14:
   pusha
   push ds
   push es
   push fs
   push gs

   call handleInterrupt14

   pop gs
   pop fs
   pop es
   pop ds
   popa
   iret


extern handleInterrupt15
global int_handler15
int_handler15:
   pusha
   push ds
   push es
   push fs
   push gs

   call handleInterrupt15

   pop gs
   pop fs
   pop es
   pop ds
   popa
   iret


; RESERVED INTERRUPTS START HERE
extern handleInterrupt16
global int_handler16
int_handler16:
   pusha
   push ds
   push es
   push fs
   push gs

   call handleInterrupt16

   pop gs
   pop fs
   pop es
   pop ds
   popa
   iret


extern handleInterrupt17
global int_handler17
int_handler17:
   pusha
   push ds
   push es
   push fs
   push gs

   call handleInterrupt17

   pop gs
   pop fs
   pop es
   pop ds
   popa
   iret


extern handleInterrupt18
global int_handler18
int_handler18:
   pusha
   push ds
   push es
   push fs
   push gs

   call handleInterrupt18

   pop gs
   pop fs
   pop es
   pop ds
   popa
   iret


extern handleInterrupt19
global int_handler19
int_handler19:
   pusha
   push ds
   push es
   push fs
   push gs

   call handleInterrupt19

   pop gs
   pop fs
   pop es
   pop ds
   popa
   iret


extern handleInterrupt20
global int_handler20
int_handler20:
   pusha
   push ds
   push es
   push fs
   push gs

   call handleInterrupt20

   pop gs
   pop fs
   pop es
   pop ds
   popa
   iret


extern handleInterrupt21
global int_handler21
int_handler21:
   pusha
   push ds
   push es
   push fs
   push gs

   call handleInterrupt21

   pop gs
   pop fs
   pop es
   pop ds
   popa
   iret


extern handleInterrupt22
global int_handler22
int_handler22:
   pusha
   push ds
   push es
   push fs
   push gs

   call handleInterrupt22

   pop gs
   pop fs
   pop es
   pop ds
   popa
   iret


extern handleInterrupt23
global int_handler23
int_handler23:
   pusha
   push ds
   push es
   push fs
   push gs

   call handleInterrupt23

   pop gs
   pop fs
   pop es
   pop ds
   popa
   iret


extern handleInterrupt24
global int_handler24
int_handler24:
   pusha
   push ds
   push es
   push fs
   push gs

   call handleInterrupt24

   pop gs
   pop fs
   pop es
   pop ds
   popa
   iret


extern handleInterrupt25
global int_handler25
int_handler25:
   pusha
   push ds
   push es
   push fs
   push gs

   call handleInterrupt25

   pop gs
   pop fs
   pop es
   pop ds
   popa
   iret


extern handleInterrupt26
global int_handler26
int_handler26:
   pusha
   push ds
   push es
   push fs
   push gs

   call handleInterrupt26

   pop gs
   pop fs
   pop es
   pop ds
   popa
   iret


extern handleInterrupt27
global int_handler27
int_handler27:
   pusha
   push ds
   push es
   push fs
   push gs

   call handleInterrupt27

   pop gs
   pop fs
   pop es
   pop ds
   popa
   iret


extern handleInterrupt28
global int_handler28
int_handler28:
   pusha
   push ds
   push es
   push fs
   push gs

   call handleInterrupt28

   pop gs
   pop fs
   pop es
   pop ds
   popa
   iret


extern handleInterrupt29
global int_handler29
int_handler29:
   pusha
   push ds
   push es
   push fs
   push gs

   call handleInterrupt29

   pop gs
   pop fs
   pop es
   pop ds
   popa
   iret


extern handleInterrupt30
global int_handler30
int_handler30:
   pusha
   push ds
   push es
   push fs
   push gs

   call handleInterrupt30

   pop gs
   pop fs
   pop es
   pop ds
   popa
   iret


extern handleInterrupt31
global int_handler31
int_handler31:
   pusha
   push ds
   push es
   push fs
   push gs

   call handleInterrupt31

   pop gs
   pop fs
   pop es
   pop ds
   popa
   iret


; RESERVED EXCEPTIONS END
; IRQ INTERRUPTS START int's 32-48, 0x20-0x30


extern handleInterrupt32
global int_handler32
int_handler32:
   pusha
   push ds
   push es
   push fs
   push gs

   call handleInterrupt32

   pop gs
   pop fs
   pop es
   pop ds
   popa
   iret


extern handleInterrupt33
global int_handler33
int_handler33:
   pusha
   push ds
   push es
   push fs
   push gs

   call handleInterrupt33

   pop gs
   pop fs
   pop es
   pop ds
   popa
   iret


extern handleInterrupt34
global int_handler34
int_handler34:
   pusha
   push ds
   push es
   push fs
   push gs

   call handleInterrupt34

   pop gs
   pop fs
   pop es
   pop ds
   popa
   iret


extern handleInterrupt35
global int_handler35
int_handler35:
   pusha
   push ds
   push es
   push fs
   push gs

   call handleInterrupt35

   pop gs
   pop fs
   pop es
   pop ds
   popa
   iret


extern handleInterrupt36
global int_handler36
int_handler36:
   pusha
   push ds
   push es
   push fs
   push gs

   call handleInterrupt36

   pop gs
   pop fs
   pop es
   pop ds
   popa
   iret


extern handleInterrupt37
global int_handler37
int_handler37:
   pusha
   push ds
   push es
   push fs
   push gs

   call handleInterrupt37

   pop gs
   pop fs
   pop es
   pop ds
   popa
   iret


extern handleInterrupt38
global int_handler38
int_handler38:
   pusha
   push ds
   push es
   push fs
   push gs

   call handleInterrupt38

   pop gs
   pop fs
   pop es
   pop ds
   popa
   iret


extern handleInterrupt39
global int_handler39
int_handler39:
   pusha
   push ds
   push es
   push fs
   push gs

   call handleInterrupt39

   pop gs
   pop fs
   pop es
   pop ds
   popa
   iret

extern handleInterrupt40
global int_handler40
int_handler40:
   pusha
   push ds
   push es
   push fs
   push gs

   call handleInterrupt40

   pop gs
   pop fs
   pop es
   pop ds
   popa
   iret

extern handleInterrupt41
global int_handler41
int_handler41:
   pusha
   push ds
   push es
   push fs
   push gs

   call handleInterrupt41

   pop gs
   pop fs
   pop es
   pop ds
   popa
   iret

extern handleInterrupt42
global int_handler42
int_handler42:
   pusha
   push ds
   push es
   push fs
   push gs

   call handleInterrupt42

   pop gs
   pop fs
   pop es
   pop ds
   popa
   iret

extern handleInterrupt43
global int_handler43
int_handler43:
   pusha
   push ds
   push es
   push fs
   push gs

   call handleInterrupt43

   pop gs
   pop fs
   pop es
   pop ds
   popa
   iret

extern handleInterrupt44
global int_handler44
int_handler44:
   pusha
   push ds
   push es
   push fs
   push gs

   call handleInterrupt44

   pop gs
   pop fs
   pop es
   pop ds
   popa
   iret

extern handleInterrupt45
global int_handler45
int_handler45:
   pusha
   push ds
   push es
   push fs
   push gs

   call handleInterrupt45

   pop gs
   pop fs
   pop es
   pop ds
   popa
   iret

extern handleInterrupt46
global int_handler46
int_handler46:
   pusha
   push ds
   push es
   push fs
   push gs

   call handleInterrupt46

   pop gs
   pop fs
   pop es
   pop ds
   popa
   iret

extern handleInterrupt47
global int_handler47
int_handler47:
   pusha
   push ds
   push es
   push fs
   push gs

   call handleInterrupt47

   pop gs
   pop fs
   pop es
   pop ds
   popa
   iret

extern handleInterrupt48
global int_handler48
int_handler48:
   pusha
   push ds
   push es
   push fs
   push gs

   call handleInterrupt48

   pop gs
   pop fs
   pop es
   pop ds
   popa
   iret

