# C Programming - Exercises Session 01

*Do the following exercises using the STK600 development board.  
Commit your solution at the end of each exercise.*

1. Hello World (or turn on a led)
    * Open the "HelloWorld" Atmel Studio project. (if no files are opening, open the `main.c` file in the *Solution Explorer*)
    * Make sure that port A and the led's are connected
    * Build the project, and program the stk600 board
    * Verify that the rightmost led got turned on

1. Try to change the program so that led 3 is turned on instead  
    (commit changes when done)

1. Modify the program so that the led is turned on and off continuously with a delay of 500 ms.  
    Hint: you can use `__delay_ms(double _ms)` defined in `util/delay.h` (`#include <util/delay.h>`)  