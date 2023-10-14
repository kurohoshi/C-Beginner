#include <stdio.h>

#define MAXARRAY 3

// same as arrarg1d(int x[8]), the int x[8] is essentially the pointer int *x
// same as arrarg1d(int *x)
void arrarg1d(int x[]);

// same as arrarg2d(int (*x)[4])
void arrarg2d(int x[][5]);

// void arrarg2d(int (*x)[4]);  // pointer to an array of 4 ints
// void arrarg2d(int *x[4]);  // array of 4 pointers to ints

int main() {
  // 1d array
  int x[8] = {1, 3, 5, 7, 9};
  int *y = x; // same as strings, x is a pointer to the first element of the array

  arrarg1d(x);

  // 2d array
  int i[MAXARRAY][5] = {
    {1, 3, 5, 7},
    {2, 4, 6, 8}
  };

  arrarg2d(i);


  // array of strings
  // no size is defined, so compiler will allocate the exact amount the initialized values need 
  char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
}

void arrarg1d(int x[]) {
  for(int i = 0; x[i] != '\0'; ++i) {
    printf("%d", x[i]);
  }
  printf("\n");
}

// 2d arrays probably have no way to knowing the last row of the array
void arrarg2d(int x[][5]) {
  for(int i = 0; i < MAXARRAY; ++i) {
    for(int j = 0; x[i][j] != '\0'; ++j) {
      printf("%d", x[i][j]);
    }
    printf("\n");
  }
}
