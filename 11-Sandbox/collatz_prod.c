#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/shm.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <unistd.h>

void storeAsInt(int *usrNum);
int main() {
   const int SIZE = 4096;
   const char *Obj = "Shm";
   int shm_fd;
   void* ptr;
   int usrNum;

   shm_fd = shm_open(Obj, O_CREAT | O_RDWR, 0777);
   ftruncate(shm_fd, SIZE);
   ptr = mmap(0, SIZE, PROT_READ | PROT_WRITE, MAP_SHARED, shm_fd, 0);

   storeAsInt(&usrNum);

   prevNum = usrNum;
   for(; usrNum != 1; ptr += sizeof(usrNum)) {
      *(int *)ptr = usrNum = usrNum%2 ? 3*usrNum+1 : usrNum/2;
   }
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
