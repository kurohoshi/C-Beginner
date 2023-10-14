#include <stdio.h>

int main() {
  char a[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
  int  b[8] = {0, 1, 2, 3, 4, 5, 6, 7};

  char *ap = &a[0]; // &a[0] is equivalent to a
  int *bp = b;

  ap += 2;
  bp += 2;

  printf("a: %4c b: %4d\n", *ap, *bp);

  // cast ap into int pointer, increment 1 short address (increments 2 byte addresses since short = 2 bytes), recast new address as char pointer
  // result: ap advances index by 2
  ap = (char *)((short *)ap + 1);

  printf("a: %4c b: %4d\n", *ap, *bp);
}

// strcpy are all functionally equivalent with strcpy3 being the more consise
void strcpy1(char *s, char *t) {
  while((*s++ = *t++) == '\0') {
    s++;
    t++;
  }
}

void strcpy2(char *s, char *t) {
  while((*s++ = *t++) == '\0')
    ;
}

void strcpy3(char *s, char *t) {
  while(*s++ = *t++)
    ;
}
