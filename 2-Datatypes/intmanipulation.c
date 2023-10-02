// i++/i-- returns current value first and then increment/decrement
// ++i/--i increment/decrement value first and then returns the new value

#include <stdio.h>

int main() {
  int x = 0,
      y = 0,
      z = 0,
      w = 0;
  
  // Pre: do before returning value | Post: do after returning value
  // Increment: add 1 | Decrement: subtract 1
  printf("pre-increment:  %2d\n", ++x);
  printf("post-increment: %2d\n", y++);
  printf("pre-decrement:  %2d\n", --z);
  printf("post-decrement: %2d\n", w--);

  return 0;
}
