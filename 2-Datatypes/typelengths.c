// https://stackoverflow.com/questions/3225506/c-data-type-size

#include <stdio.h>

int main() {
  int *i;

  printf("char:  %d\n",       sizeof(char));
  printf("short: %d\n",       sizeof(short));
  printf("size_t: %d\n",      sizeof(size_t));
  printf("int: %d\n",         sizeof(int));
  printf("long: %d\n",        sizeof(long));
  printf("long long: %d\n",   sizeof(long long));
  printf("float: %d\n",       sizeof(float));
  printf("double: %d\n",      sizeof(double));
  printf("long double: %d\n", sizeof(long double));
  printf("int *: %d\n",       sizeof(i));

  return 0;
}
