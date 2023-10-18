#include <stdio.h>
#include <stdarg.h>

void listInts(int n, ...);

int main() {
  listInts(4, 1, 2, 3, 4);

  return 0;
}

void listInts(int n, ...) {
  va_list list;


  va_start(list, n);

  while(n--) {
    printf("%d\n", va_arg(list, int));
  }

  va_end(list);
}
