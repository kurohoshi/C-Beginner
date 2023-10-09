#include <stdio.h>

// usually typecast to a datatype with more info/precision to avoid losing information
int main() {
  char x = 'f';

  printf("a char x is: %c\n", (char)x);
  printf("a int x is: %d\n", (int)x);
  printf("a int x is: %f\n", (float)x);

  return 0;
}
