#include <stdio.h>

void storeAsInt(int *usrNum);

int main() {
  int usrNumInt;
  storeAsInt(&usrNumInt);

  while(usrNumInt < 2) {
    printf("Number is less than 2, try again!\n");
    storeAsInt(&usrNumInt);
  }

  for(int i = 2; i <= usrNumInt; ++i) { // iterate thru numbers
    for(int j = 2; j <= i; ++j) { // iterate thru possible moduli
      if(!(i%j)) { // execute the following code if a remainder 0 is detected
        if(j == i) { // if j is equal to i, then that means number is only dividible by itself, thus a prime number
          printf("%-5d", i);
        }
        break; // break out of moduli checking and move to the next number to be checked
      }
    }
  }

  return 0;
}

void storeAsInt(int *usrNum) {
  int inputNum;
  *usrNum = 0;

  printf("Enter a number greater than 1: ");

  while((inputNum = getchar()) != EOF) {  // get next char from line buffer
    if(inputNum >= '0' && inputNum <= '9') {
      *usrNum = *usrNum*10 + (inputNum & 0xF);  // accumulate in integer variable
    } else if(inputNum == '\n') {
      break;  // break out if all char is read (implies valid number)
    } else {
      printf("Not a number, try again: ");
      *usrNum = 0;  // reset accumulated value
      while(getchar() != '\n') // flush out input line buffer
        ;
    }
  }
}
