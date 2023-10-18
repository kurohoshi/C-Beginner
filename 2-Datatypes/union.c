#include <stdio.h>

// -------------
// |   |   | c |
// -------------
// |     i     |
// -------------
typedef union test1 {
  char c;
  int i;
} Test;


// -----------------------------
// |             addr          |
// -----------------------------
// | net3 | net2 | net1 | net0 |
// -----------------------------
typedef union ip {
  struct {
    unsigned char net0;
    unsigned char net1;
    unsigned char net2;
    unsigned char net3;
  } subnets;
  unsigned int addr;
 } ipv4;

int main() {
  Test utest = {
    .c = 'A'
  };
  utest.i = 1024;  // 2^10
  printf("Test.c value: %d    Test.i value: %d\n", utest.c, utest.i);


  ipv4 ipaddress;

  ipaddress.subnets.net3 = 192;
  ipaddress.subnets.net2 = 168;
  ipaddress.subnets.net1 = 1;
  ipaddress.subnets.net0 = 1;

  printf("The IP address is: %d.%d.%d.%d\n", ipaddress.subnets.net3, ipaddress.subnets.net2, ipaddress.subnets.net1, ipaddress.subnets.net0);
  printf("The IP address is also: 0x%x\n", ipaddress.addr);

  return 0;
}
