#include <stdio.h>

void main (void) {
  int a = 0;

  switch (a) {
    case 0:
      printf("A is equal to 0\n");
      break;
    case 1:
      printf("A is equal to 1\n");
      break;
    default:
      printf("A is greater than 1\n");
      break;
  }
}
