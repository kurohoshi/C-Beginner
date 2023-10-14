#include <stdio.h>
#include <ctype.h>

#define MAXARRAY 2

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
    {0, 3, 5, 7},
    {2, 4, 6, 8}
  };

  printf("Number of bytes in i: %d\n", sizeof(i));
  printf("Number of bytes in a row of i: %d\n", sizeof(i[0])); // since array cant be of 0 elements, use 0th index to check size of 2nd dimension of elements
  printf("Number of rows: %d\n", sizeof(i)/sizeof(i[0])); // number of rows
  printf("Number of elements per row: %d\n", sizeof(i[0])/sizeof(i[0][0])); // number of elements per row

  arrarg2d(i);


  // array of pointers to strings
  // no size is defined, so compiler will allocate the exact amount the initialized values need
  char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
  int m_size = sizeof(months)/sizeof(char *);
  for(int i = 0; i < m_size; ++i) {
    printf(months[i]);
  }
}

void arrarg1d(int x[]) {
  for(int i = 0; x[i] != '\0'; ++i) {
    printf("%d", x[i]);
  }
  printf("\n");
}

// 2d array arguments probably have no way to knowing the last row of the array
// use array of pointers in that case
void arrarg2d(int x[][5]) {
  for(int i = 0; x[0][i] != '\0'; ++i) { // iterate until a 0 value is found (not guarenteed to iterate to end of array)
    printf("row %d, column %d: %d\n", i/(sizeof(x[0])/sizeof(int)), i%(sizeof(x[0])/sizeof(int)), x[0][i]);
  }
  printf("%d\n", x[0][5]);

  // WRONG! outer loop will iterate more times than needed, resulting in unexpected behavior
  // printf("%d", x[2][0]);
  // for(int i = 0; x[i][0] != '\0'; ++i) {
  //   for(int j = 0; x[i][j] != '\0'; ++j) {
  //     printf("%d", x[i][j]);
  //   }
  //   printf("\n");
  // }
}
