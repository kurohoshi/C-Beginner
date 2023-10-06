// https://en.wikibooks.org/wiki/C_Programming/stdio.h/printf#Format_placeholders

#include <stdio.h>

int main() {
  // Add a handful of common printf formatted output

  printf("Example text");
  printf("Example text |%s|\n", "normal");
  printf("Example text |%20s|\n", "aligned right");
  printf("Example text |%-20s|\n", "aligned left");
  printf("Example text |char(hex): %c|\n", 0x41);
  printf("Example text |char(dec): %c|\n", 65);
  printf("Example text |%d|\n", 512);
  printf("Example text |%f|\n", 3.14);

  for(int i=0; i<4; ++i) {
    for(int j=0; j<=i; ++j) {
      printf("*"); // or putchar()
    }
    printf("\n"); // or putchar()
  }

  return 0;
}

// Can be used for pretty printing
