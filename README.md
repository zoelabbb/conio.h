# Library <conio.h> For Linux

## What is `#include <conio.h>` ?

In C/C++ code, you often see the line `#include <conio.h>`. This line is used to include the `<conio.h>` file in your main program. The `<conio.h>` header file provides functions for input and output operations.

`#include <conio.h>` is a header file, `conio` stands for console-input-output and (.h) is basically header file extension.

It contains some functions and methods for formatting the output and getting input in the console.

The error will be shown like below :
> ![conio h fatal error](https://github.com/zoelabbb/conio.h/blob/master/src/img/fatalerror.png)

If you encounter an error like `conio.h: fatal error`, this library might be what you need.

## List of Functions in `<conio.h>`

The library provides various functions, including:
    
- `cprintf`
- `cscanf`
- `gotoxy`
- `clrscr`
- `textcolor`
- `textbackground`
- `wherex`
- `wherey`
- `getch`
- `getche`
- `ungetch`
- `kbhit`
- `putch`
- `putchar`
- `cputs`
- `clreol`
- `insline` (not implemented)
- `delline` (not implemented)
- `cgets`  (not implemented)
- `getpass` (not implemented)
- `gettext` (not implemented)
- `_cprintf`
- `_cscanf`
- `_cputs`
- `_getche`
- `_kbhit`
- `_putch`
- `_ungetch`

Some commonly used functions:
- `kbhit` - Checks if a key was pressed.
- `gcgets` - Reads a string from the console.
- `cscanf` - Reads formatted values from the console.
- `putch` - Writes a character to the console.
- `cputs` - Writes a string to the console.
- `cprintf` - Formats values and writes them to the console.
- `clrscr` - Clears the screen.
- `getch` - Gets a character from the console.

## How to Install the Library `#include <conio.h>`

Follow these steps to install the `conio.h` library for Linux:

### Step 1:
1. First, open your terminal as root.
   ```bash
   sudo apt-get update
   sudo apt-get upgrade
   sudo apt-get install git
   git clone https://github.com/zoelabbb/conio.h.git
   cd conio.h
   ```
   > ![Copy & Paste](https://github.com/zoelabbb/conio.h/blob/master/src/img/Copy%20%26%20Paste.png)

### Step 2:
   ```bash
   sudo make install
   ```
   Restart or close your IDE and open it again.

Now you can use the library `#include <conio.h>`.

## Support Me

If you find this library helpful, you can support the developer by:
- [PayPal ☕](#)
- [Buy Coffee ☕](#)

Feel free to use and contribute to this library!