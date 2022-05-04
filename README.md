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

![conio h](https://user-images.githubusercontent.com/49254668/55953523-85b33c80-5c86-11e9-8568-71a638a9782e.png)
