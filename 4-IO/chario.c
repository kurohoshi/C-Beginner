#include <stdio.h>

int main() {
  int c;

  // EOF is typecasted (changing type to) an integer to be printed
  printf("EOF value is: %d\n", (int)EOF);

  // waits until std input is recieved
  // then getchar() reads the first character recieved in line buffer
  c = getchar();
  putchar(c);
  putchar(c);

  // waits until std input is recieved
  // reads the line buffer 1 character at a time and outputs to std output
  // repeats until line buffer is consumed
  //    getchar() will then either exit loop if EOF integer is detected
  //    or getchar() will wait for the next line buffer to arrive from std input
  while((c = getchar()) != EOF) {
    printf("%d", c);
    putchar(c);
  }

  return 0;
}

// Example tasks to use getchar()
//    - Line/Word/Char count
//    - echo input to output
