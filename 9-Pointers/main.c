#include <stdio.h>

void swap1(char a, char b);
void swap2(char *a, char *b);

int main() {
  int x = 10;
  int y;
  int *i = &x;
  int *j;

  printf("x: %d\n", x);
  printf("i: %d\n", i);

  *i = *i + 5; // *i essentially functions as x, so this is functionally the same as x = x + 5;
  y = *i + 10; // adds 10 with the dereferenced value at i then saves value into y

  (*i)++;
  ++*i; // probably more readable with parenthesis
  (*i)--;
  --*i; // probably more readable with parenthesis

  printf("y: %d\n", y);
  printf("i: %d\n", i);
  // printf("j: %d\n", j); // garbage values right now



  // See argtypes in 5-Function
  int a = 'A';
  int b = 'B';

  printf("Before swap1:  a= %4c b= %4c\n", a, b);
  swap1(a, b);
  printf("After swap1:  a= %4c b= %4c\n", a, b);

  a = 'A';
  b = 'B';

  printf("Before swap2:  a= %4c b= %4c\n", a, b);
  swap2(&a, &b);
  printf("After swap2:  a= %4c b= %4c\n", a, b);
}

void swap1(char a, char b) {
  char tmp = a;

  a = b;
  b = tmp;
}

void swap2(char *a, char *b) {
  char tmp = *a;

  *a = *b;
  *b = tmp;
}
