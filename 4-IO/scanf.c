#include <stdio.h>

int main() {
  int year, month, day;

  // Opposite of printf, pattern matching input
  printf("Enter date in year/month/day numeric format: ");
  scanf("%d/%d/%d", &year, &month, &day); // takes ONLY pointers for args
  printf("The common american date format is: %d/%d/%d", month, day, year);

  return 0;
}
