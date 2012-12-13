#ifndef TERMINAL_BASE_H
#define TERMINAL_BASE_H

#define BLACK_BKG 0x0
#define BLUE_TXT 0x0
#define LBLUE_TXT 0x0
#define LWHITE_TXT 0x0

#define STANDARD_TXT 0x0
#define ERROR_TXT 0x0
#define LOWLEVEL_TXT 0x0

void sbPrintln(char*, char);
void sbMoveCursor(int,int);

#endif
