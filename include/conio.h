#pragma once
/*

============ Source code ============
Link        : https://raw.githubusercontent.com/ramadhinolfski/cpackets/master/conio.h
GitHub      : https://github.com/zoelabbb/conio.h.git
=====================================

*/

/**
* conio4linux (Conio.h for linux)
* Copyright (C) 2013 by Carlos J. Pinto B.
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

/**
* @author Carlos J. Pinto B. <pintocar83@gmail.com>
* @date 2013-11-05
* @version 0.3
*/

/*
List funtions
=============
    cprintf
    cscanf
    gotoxy
    clrscr
    textcolor
    textbackground
    wherex
    wherey
    getch
    getche
    ungetch
    kbhit
    putch
    putchar
    cputs
    clreol
    insline (not implemented)
    delline (not implemented)
    cgets   (not implemented)
    getpass (not implemented)
    gettext (not implemented)
    _cprintf
    _cscanf
    _cputs
    _getche
    _kbhit
    _putch
    _ungetch
    
Instalation for linux
=====================
    Copy file conio.h to /usr/include/
    Run as root user:
      cp conio.h /usr/include/

Example program
===============
//File name: main.cpp
//Compilation: gcc main.cpp -o program_conio -lstdc++
//Test program: ./program_conio

#include<conio.h>

int main(int argc, char *argv[]) {
  textbackground(BLUE);
  clrscr();

  textcolor(NORMAL, WHITE);
  gotoxy(30, 5);
  cprintf("Hello World WHITE");
  textcolor(YELLOW);
  gotoxy(30,6);

  cprintf("Hello World YELLOW");

  for (int i = 0; i < 16; i++) {
    textcolor(i);
    gotoxy(1,2+i);
    cprintf("Hello World");
  }

  getch();
  return 0;
}

I need help for
===============
  *Document funtions.
  *Implement funtions not implemented.
  *Add funtions new.
  *Report bugs.

  For any case:
  Send a mail to pintocar83@gmail.com with the modifications and information: Email, Autor and changes.
  Thanks!!!

Contributions
=============
Panda Soli (https://github.com/pandasoli)
*/


#ifndef __CONIO4LINUX_H
#define __CONIO4LINUX_H

#include <stdbool.h>

// Colors
#define BLACK        0
#define BLUE         1
#define GREEN        2
#define CYAN         3
#define RED          4
#define MAGENTA      5
#define BROWN        6
#define WHITE        7

// Format
#define NORMAL       0
#define BOLD         1
#define LIGHT        2
#define ITALIC       3
#define UNDERLINED   4
#define REVERSE      7

short
  CONIO4LINUX_bgc = 0,
  CONIO4LINUX_fgc = 7,
  CONIO4LINUX_fgf = 0;

void clreol();
void insline();
void delline();

void gotoxy(int, int);
void clrscr();

void textbackground(int);
void textcolor(short, short);

int ungetch(int);

int getch_echo(bool);

int getch();
int getche();

int wherexy(int *, int *);
int wherex();
int wherey();

int kbhit();

int putch(const char);
int cputs(const char *);

char *getpass(const char *);
int gettext(int, int, int, int, void *);

#endif
