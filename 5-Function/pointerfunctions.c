// demonstrate passing a function's pointer as a parameter into a different function

#include <stdio.h>

// can also do typedef earlier to keep code cleaner
typedef int (*cb)(int);

int doThings1();
int doThings2(int (*callback)());
int doThings3(int x);
int doThings4(cb callback);

int main() {
  int result1 = doThings2((int (*)())(doThings1));
  printf("%d\n", result1);

  int result2 = doThings2((int (*)(int))(doThings3));
  printf("%d\n", result2);

  int result3 = doThings2(doThings3);
  printf("%d\n", result3);

  int result4 = doThings4(doThings3);
  printf("%d\n", result4);

  return 0;
}

int doThings1() {
  return 100;
}

int doThings2(int (*callback)()) {
  return callback(30);
}

int doThings3(int x) {
  return x*x;
}

int doThings4(cb callback) {
  return callback(20);
}
