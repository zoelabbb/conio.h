#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <termios.h>
#include "conio.h"


void clreol() { printf("\e[K"); }
void insline() { printf("\x1b[1L"); }
void delline() { printf("\e[1M"); }

void gotoxy(int x, int y) {
  printf("\e[%d;%df", y, x);
}

void clrscr() {
  printf("\e[%dm\e[2J\e[1;1f", CONIO4LINUX_bgc);
}

void textbackground(int color) {
  CONIO4LINUX_bgc = color + 40;
  printf("\e[%dm", CONIO4LINUX_bgc);

  /*
    0 (black) + 40 = 40 = black background
    4 (blue)  + 40 = 44 = blue background
    2 (green) + 40 = 42 = green background
    ...
  */
}

void textcolor(short format, short color) {
  CONIO4LINUX_fgf = format;
  CONIO4LINUX_fgc = color;

  printf("\e[%d;%dm", CONIO4LINUX_fgf, CONIO4LINUX_fgc);
}

int ungetch(int ch) {
  return ungetc(ch, stdin);
}

int getch_echo(bool echo) {
  struct termios oldt, newt;
  int ch;

  tcgetattr(STDIN_FILENO, &oldt);
  newt = oldt;
  newt.c_lflag &= ~ICANON;

  if (echo)
    newt.c_lflag &= ECHO;
  else
    newt.c_lflag &= ~ECHO;

  tcsetattr(STDIN_FILENO, TCSANOW, &newt);
  ch = getchar();
  tcsetattr(STDIN_FILENO, TCSANOW, &oldt);

  return ch;
}

int getch() { return getch_echo(false); }
int getche() { return getch_echo(true); }

int wherexy(int *x, int *y){
  printf("\e[6n");

  if (getch() != '\x1B') return false;
  if (getch() != '\x5B') return false;

  int
    in,
    ly = 0,
    lx = 0;

  while ((in = getch()) != ';')
    ly = ly * 10 + in - '0';  

  while ((in = getch()) != 'R')
    lx = lx * 10 + in - '0';

  *x = lx;
  *y = ly;

  return true;
}

int wherex() {
  int
    x = 0,
    y = 0;

   wherexy(&x, &y);

  return x;
}

int wherey(){
  int
    x = 0,
    y = 0;

  wherexy(&x, &y);

  return y;
} 

int kbhit() {
  struct termios oldt, newt;
  int
    ch,
    oldf;

  tcgetattr(STDIN_FILENO, &oldt);
  newt = oldt;
  newt.c_lflag &= ~(ICANON | ECHO);
  tcsetattr(STDIN_FILENO, TCSANOW, &newt);
  oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
  fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);
  ch = getchar();
  tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
  fcntl(STDIN_FILENO, F_SETFL, oldf);

  if (ch != EOF) {
    ungetc(ch, stdin);
    return true;
  }

  return false;
}

int putch(const char c) {
  printf("%c", c);
  return (int) c;
}

int cputs(const char *str) {
  printf("%s", str);
  return 0;
}

char*getpass(const char *prompt) {
  //implementada en unistd.h
}

int gettext(int l, int t, int r, int b, void* destination) {}
