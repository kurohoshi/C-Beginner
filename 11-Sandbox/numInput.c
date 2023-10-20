#include <stdio.h>
#include <ctype.h>

#define MAX_DIGITS 100

void storeAsInt(int *usrNum);
void storeAsStr(char usrNum[]);

int main() {
  int usrNumInt;
  storeAsInt(&usrNumInt);


  char usrNumChar[MAX_DIGITS];
  storeAsStr(usrNumChar);

  printf("Number accepted as Integer:     %d\n", usrNumInt);
  printf("Number accepted as Char Array:  %s\n", usrNumChar);
  return 0;
}

void storeAsInt(int *usrNum) {
  int inputNum;

  printf("Enter a number: ");

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

void storeAsStr(char usrNum[]) {
  char inputChar;
  int i = 0;

  printf("Enter a number again: ");

  while((inputChar = getchar()) != EOF) {
    if(inputChar >= '0' && inputChar <= '9') {
      if(inputChar == '0' && i == 0) {
        continue;  // ignore leading 0's
      } else {
        usrNum[i++] = inputChar; // save digit in char array and increment to next index
      }
    } else if(inputChar == '\n') {
      usrNum[i] = '\0'; // cap the end of number with null char
      break;
    } else {
      printf("Not a number, try again: ");
      i = 0;
      while(getchar() != '\n')
        ;
    }
  }
}
