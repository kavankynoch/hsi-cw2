#include <stdio.h>  // debugging only
#include "gpio.h"
#include "lcd-binary.h"
#include "cw2-aux.h"


/* ***************************************************************************** */
/* HINT: use the CPP variable ASM with ifdef's to select Asm (or C) versions of the code. */
/* ***************************************************************************** */


/*
  Hardware Interface function.
  Set the mode for pin number @pin@ to @mode@ (can be INPUT or OUTPUT (encoded as int)).
*/
void pin_mode(volatile uint32_t *gpio, int pin, int mode)
{
  /* ***************************************************************************** */
  /* COMPLETE THIS CODE */
  /* ***************************************************************************** */

}

/*
  Hardware Interface function.
  Send a @value@ along pin number @pin@. Values should be LOW or HIGH (encoded as int).
*/
void digital_write (volatile uint32_t *gpio, int pin, int value)
{
  /* ***************************************************************************** */
  /* COMPLETE THIS CODE */
  /* ***************************************************************************** */

}

/*
  Hardware Interface function.
  Read input from a button device connected to pin @button@.. Result can be LOW or HIGH (encoded as int).
*/
int read_button(volatile uint32_t *gpio, int button) {
  /* ***************************************************************************** */
  /* COMPLETE THIS CODE */
  /* ***************************************************************************** */
  // fill in your code and replace the return statement below with the value read from the button
  return LOW;
}

