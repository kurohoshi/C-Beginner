#include <stdio.h>
#include <ctype.h>

// uses expr to print the variable name itself as well as its value
#define dprint(expr) printf(#expr " is %d\n", expr)

// concatenates 2 arguments as a new token
#define strcat(a, b) a ## b


int main() {
  int foobar = 5;
  dprint(foobar);

  // foo and bar will be concatenated as foobar, then the token foobar will be used to print out the value of foobar
  printf("%d", strcat(foo, bar)); 
}
