/*----------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class>
 * ---------------------------------------------------------
 * Exercise Number: 6
 * Title:     Pointer fun... again..
 * Author:    Wallinger Marc
 * ----------------------------------------------------------
 * Description:
 * Once again: Messing around with those funny pointers
 * ----------------------------------------------------------
 */
#include <stdio.h>
#include <string.h>

struct PlayStruct {
  int int_value;
  double double_value;
  char a_string[64];
};

void change_struct(struct PlayStruct ps, struct PlayStruct* pps);
void print_struct(struct PlayStruct ps, struct PlayStruct* pps);
void print_string(char string_to_print[]);
void change_string(char string1[], char* p_string[]);

int main(int argc, char const *argv[]) {
  struct PlayStruct play_struct;
  struct PlayStruct* play_struct_pointer;
  play_struct_pointer = &play_struct;

  play_struct_pointer->int_value = 3;
  play_struct_pointer->double_value = 3.141;
  strcpy(play_struct_pointer->a_string, "Test");

  print_struct(play_struct, play_struct_pointer);
  change_struct(play_struct, play_struct_pointer);
  /* ↑↑↑ Only the pointer gets changed ↑↑↑
   *
   * Reason: play_struct is just a "copy" of the original
   * variable, it doesn't point directly to it.
  */

  print_struct(play_struct, play_struct_pointer);
  print_string(play_struct.a_string);

  char another_string[16] = "Lorem ipsum dolo";
  char* pointer_to_string = another_string;

  change_string(play_struct.a_string, &pointer_to_string);

  print_string(play_struct.a_string);
  print_string(another_string);
  // ↑ Both strings get changed because they're pointers

  return 0;
}

void change_struct(struct PlayStruct ps, struct PlayStruct* pps) {
  ps.int_value = 12;
  ps.double_value = 42.01;
  strcpy(ps.a_string, "Changed values.. Or not?");

  pps->int_value = 25;
  pps->double_value = 187.4;
  strcpy(pps->a_string, "Change happened!");
}

void print_struct(struct PlayStruct ps, struct PlayStruct* pps) {
  printf("Values of struct ps: %d, %lf, %s\n", ps.int_value, ps.double_value, ps.a_string);
  printf("Values of struct pps: %d, %lf, %s\n", pps->int_value, pps->double_value, pps->a_string);
}

void print_string(char string_to_print[])
{
  printf("%s\n", string_to_print);
}

void change_string(char string1[], char* p_string[])
{
  string1[2] = '\0';
  *(*p_string + 1) = '\0';
}
