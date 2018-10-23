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

struct PlayStruct {
  int int_value;
  double double_value;
  char string_value[64];
};

int main(int argc, char const *argv[]) {
  struct PlayStruct play_struct;
  struct PlayStruct play_struct_pt;
  struct PlayStruct* play_struct_pointer;
  play_struct_pointer = &play_struct_pt;

  play_struct_pointer->int_value = 3;
  play_struct_pointer->double_value = 3.141;
  return 0;
}
