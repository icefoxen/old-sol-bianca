; This is the startup file for Sol Bianca.  This jumps to and starts the whole
; shebang.
;
; Simon Heath
; 14/6/2003

global _start
extern sbMain

_start:
   ; This sequence blinks all the keyboard LED's to on.
   ;call kbd
   ;mov al, 0xED
   ;out 0x60, al
   ;call kbd
   ;mov al, 0x07
   ;out 0x60, al

   ;kbd0:
   ;jmp short $+2
   ;in al, 0x60
   ;kbd:
   ;jmp short $+2
   ;in al, 0x64
   ;test al, 1
   ;jnz kbd0
   ;test al, 2
   ;jnz kbd
   ;ret

   call sbMain 

   ; The below is just some magic so GRUB can load this; I dunno how
   ; multiboot-compliant it is, but it seems to work.
   align 4
   dd 0x1badb002
   dd 0
   dd 0 - 0x1badb002
