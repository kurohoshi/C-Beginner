#include <stdio.h>

int main() {
  int c;

  // EOF is typecasted (changing type to) an integer to be printed
  printf("EOF value is: %d\n", (int)EOF);

  while((c = getchar()) != EOF) {
    putchar(c);
  }
  
  return 0;
}
