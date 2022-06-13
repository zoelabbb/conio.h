# Library <conio.h> For Linux

## What is #include <conio.h>

If you see at the top of some C/C++ code, 90% of the time you'll see the line `#include <conio.h>`.

We're including the file `<conio.h>` into our main program. The `<conio.h>` header file contains certain library functions that peform input and output operation.

`#include <conio.h>` is a header file, `conio` stands for console-input-output and (.h) is basically header file extension.

It contains some functions and methods for formatting the output and getting input in the console.

The error will be shown like below :
![conio h fatal error](https://github.com/zoelabbb/conio.h/blob/master/src/img/fatalerror.png)

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

# How To Install Library #include <conio.h>

This is a library `conio.h` for linux. Just copy file and paste file `conio.h` on `/usr/include/` but don't forget before you want copy paste on `/usr/include/` you must open folder as `ADMINISTRATOR` first !!

### Step 1 :

- Open your terminal can as root
- sudo apt-get update
- sudo apt-get upgrade
- sudo apt-get install git
- git clone `https://github.com/zoelabbb/conio.h.git` or [Click to Clone Repos](https://github.com/zoelabbb/conio.h.git)
- cd conio.h

> ![Copy & Paste](https://github.com/zoelabbb/conio.h/blob/master/src/img/Copy%20%26%20Paste.png)

### Step 2 :
- `sudo make install`
- Restart or Close your IDE and open it again
- And done :D

Now you can using library `#include <conio.h>`.

# Support Me

Wanna Support me ? You can buy me some coffee via :

- [PayPal :coffee:](https://www.paypal.com/paypalme/haialipp).
- [Buy Coffee :coffee:](https://www.buymeacoffee.com/ikoo).
