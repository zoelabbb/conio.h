# Library <conio.h> For Linux

## What is #include <conio.h>

If you look at the top of some C/C++ code, 90% of the time you'll see the line `#include <conio.h>`.

We're including the file `<conio.h>` into our main program. Why would we do this ? So, the `<conio.h>` header file contains certain library functions that let us peform input and output operation.

`#include <conio.h>` is a header file, `conio` stands for console-input-output and (.h) is basically header file extension.

It contains some functions and methods for formatting the output and getting input in the console.

# List Function <conio.h>

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

Some of it's functions which are often used :

- kbhit - Determines if a keyboard key was pressed.
- gcgets - Reads a string directly from the console.
- cscanf - Reads formatted values directly from the console.
- putch - Writes a character directly to the console.
- cputs - Writes a string directly to the console.
- cprintf - Formats values and writes them directly to the console.
- clrscr - Clears the screen.
- getch - Get char entry from the console

# Screenshoot Installation

### Step 1 :

- Open terminal sudo apt-get update
- sudo apt-get upgrade
- sudo apt-get install git
- git clone `https://github.com/zoelabbb/conio.h.git`or [Clone here](https://github.com/zoelabbb/conio.h.git)
- cd conio.h

> ![Copy & Paste](https://github.com/zoelabbb/conio.h/blob/master/src/img/Copy%20%26%20Paste.png)

### Step 2 :

- After you finish download file conio.h
- Copy file conio.h :point_right: !! copy file not folder !!
- Go to `/usr/include/`
- Right click on folder `/usr/include/`
- Choose Open as Administrator
- Paste file `conio.h`
- Close your IDE and open again
- Done :D
