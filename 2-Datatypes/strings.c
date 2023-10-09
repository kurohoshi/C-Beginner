#include <stdio.h>

int main() {
  // NOTE: a 'string' is an array of characters terminated by the null (\0) character
  // NOTE: x and x2 are equivalent
  char x[64] = "Hey! this is a string!\n";
  char x2[64] = {'H', 'e', 'y', '!', ' ', 't', 'h', 'i', 's', ' ', 'i', 's', ' ', 'a', ' ', 's', 't', 'r', 'i', 'n', 'g', '!', '\n'};

  printf("%s", x);

  int y = 0;
  while(x[y] != '\0') {
    printf("%c", x[y]);
    y++;
  }

  // a more compact way to write the while loop above (slightly less understandable)
  int z = -1;
  while(x[++z] != '\0') {
    printf("%c", x[z]);
  }

  return 0;
}
