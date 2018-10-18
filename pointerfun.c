/*----------------------------------------------------------
 *				HTBLA-Leonding / Class: 2DHIF
 * ---------------------------------------------------------
 * Exercise Number: 4
 * Title:						Pointer Fun
 * Author:					Jan Fischlmayr
 * ----------------------------------------------------------
 * Description:
 * An Exercise about values and pointers in C
 * ----------------------------------------------------------
 */
#include <stdio.h>

void print_integers(int value, int *pointer);
void change_integers(int value, int *pointer);

int main(int argc, char *argv[]) {

  int int_value;
  int *int_pointer;

  int_value = 10;
  int_pointer = &int_value;

  /*I assign the pointer with the address of int_value*/

  print_integers(int_value, int_pointer);
  change_integers(int_value, int_pointer);
  print_integers(int_value, int_pointer);
  /*Both values are changed,
  because i linked the pointer with the value,
  so it actually changes the value*/

  return 0;
}

void print_integers(int value, int *pointer) {
  printf("Got an integer value %d and an address"
          " to an integer with value %d\n", value, *pointer + 1);
}

void change_integers(int value, int *pointer) {
  value = 20;
  *pointer = value;
}
