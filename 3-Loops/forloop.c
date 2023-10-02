// https://stackoverflow.com/questions/3225506/c-data-type-size

#include <stdio.h>

int main() {
  // NOTE: can leave out curly brackets for 1 line statements (NOT RECOMMENDED)
  int x;
  for(x=0; x<5; x++)
    printf("%d", x);

  // NOTE: no code block requires for loop to be terminated by semicolon 
  int y;
  for(y=0; y<5; y++) ;

  // NOTE: initial value declaration in for loop limits the scope of it
  for(int z=0; z<5; z++) {

  }

  return 0;
}
