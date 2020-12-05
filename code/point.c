#include <stdio.h>

void main (void) {
  int a;
  int *ptr_for_a;

  ptr_for_a = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptr_for_a = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptr_for_a is %d\n", ptr_for_a);
  printf("It stores the value %d\n", *ptr_for_a);
  printf("The address of a is %d\n", &a);
}
