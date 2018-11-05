/*----------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class>
 * ---------------------------------------------------------
 * Exercise Number: 6
 * Title:     Pointer fun... again..
 * Author:    Wallinger Marc
 * ----------------------------------------------------------
 * Description:
 * Calculates a pyramid of numbers, i.e., it multiplies a big
 * integer by the number 2, its result by 3, etc. and then
 * returns to the original value by subsequently dividing,
 * again starting by 2, 3, etc.
 * ----------------------------------------------------------
 */
#include <stdio.h>
#include <string.h>

struct PlayStruct {
  int int_value;
  double double_value;
  char string_value[64];
};

void change_struct(struct PlayStruct ps, struct PlayStruct* pps) {
  ps.int_value = 12;
  ps.double_value = 42.01;
  strcpy(ps.string_value, "Changed values.. Or not?");

  pps->int_value = 25;
  pps->double_value = 187.4;
  strcpy(pps->string_value, "Change happened!");
}

void print_struct(struct PlayStruct ps, struct PlayStruct* pps) {
  printf("Values of struct ps: %d, %lf, %s\n", ps.int_value, ps.double_value, ps.string_value);
  printf("Values of struct pps: %d, %lf, %s\n", pps->int_value, pps->double_value, pps->string_value);
}

int main(int argc, char const *argv[]) {
  struct PlayStruct play_struct;
  struct PlayStruct* play_struct_pointer;
  play_struct_pointer = &play_struct;

  play_struct_pointer->int_value = 3;
  play_struct_pointer->double_value = 3.141;
  strcpy(play_struct_pointer->string_value, "Test");

  print_struct(play_struct, play_struct_pointer);
  change_struct(play_struct, play_struct_pointer);
  /* ↑↑↑ Only the pointer gets changed ↑↑↑
   *
   * Reason: play_struct is just a "copy" of the original
   * variable, it doesn't point directly to it.
  */

  print_struct(play_struct, play_struct_pointer);

  return 0;
}
