#include <stdio.h>

int passByValue(int x);
int passByReference(int *x);

int main() {
  int num = 10;
  // pass the value itself into function
  passByValue(num);
  printf("After Pass by Value function, value: %d\n", num);

  // pass the reference to the value into function
  passByReference(&num);
  printf("After Pass by Reference function, value: %d\n", num);

  return 0;
}

int passByValue(int x) {
  printf("Pass by Value function, before change: %d\n", x);
  x = 15;
  printf("Pass by Value function, after change: %d\n", x);
}

int passByReference(int *x) { // technically passing by value with the address the value is pointing to
  // use dereferenced value to use the value at the reference
  printf("Pass by Reference function, before change: %d\n", *x);
  *x = 25;
  printf("Pass by Reference function, after change: %d\n", *x);
}
