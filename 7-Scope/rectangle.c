#include <stdio.h>
#include "rectangle.h"

int xVar = 50;
static int staticXVar = 100;

int getSide() {
  printf("Side length is: %d\n", LENGTH);

  return LENGTH;
}

int getXVar() {
  return xVar;
}

int setXVar(int val) {
  return xVar = val;
}

int getStaticXVar() { // getter function to access static variable
  return staticXVar;
}

int setStaticXVar(int val) { // setter function to modify static variable
  return staticXVar = val;
}

static int getStaticArea(int a, int b) { // static function, should only be visible within this file
  return a*b;
}

int getArea(int a, int b) {
  return getStaticArea(a, b);
}
