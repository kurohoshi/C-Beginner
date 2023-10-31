#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/shm.h>
#include <sys/stat.h>
#include <sys/mman.h>

int main() {
   const int SIZE = 4096;
   const char *Obj = "Shm";
   int shm_fd;
   void* ptr;

   shm_fd = shm_open(Obj, O_RDONLY, 0666);
   ptr = mmap(0, SIZE, PROT_READ, MAP_SHARED, shm_fd, 0);
   
   do {
      printf("%5d", *(int *)ptr);
   } while(*(int *)ptr != 1);

   shm_unlink(Obj);
}
