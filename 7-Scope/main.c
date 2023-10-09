#include <stdio.h>
#include "rectangle.h"

int main() {
  extern int xVar;
  printf("extern xVar = %d\n", xVar);
  xVar = 1000; // can modify the global (extern) variable in a different file
  printf("extern xVar = %d\n", xVar);


  extern int staticXVar; // legal declaration, but invalid; staticXVar is static extern, therefore it's scope is limited to the file its located in
  // printf("extern xVar = %d\n", staticXVar);
  // staticXVar = 1000; // can modify the global (extern) variable in a different file
  // printf("extern xVar = %d\n", staticXVar);

  printf("xVar = %d\n", getXVar());
  printf("setting xVar = %d\n", setXVar(25));
  printf("staticXVar = %d\n", getStaticXVar());
  printf("setting staticXVar = %d\n", setStaticXVar(500));


  printf("LENGTH constant via header: %d\n", LENGTH);
  printf("LENGTH constant via accessor function: %d\n", getSide());


  printf("area = %d\n", getArea(4, 7));
  // printf("area = %d\n", getStaticArea(5, 5)); // invalid call, scope is limited by static keyword so this function doesn't exist here
}
