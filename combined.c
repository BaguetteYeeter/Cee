#include <stdio.h>

void main (void) {
  printf("Hello World!\n");

  int a;
  int b = 3;
  int c;

  a = 2;
  c = b + a;
  printf("The sum of %d and %d is %d\n", a, b, c);

  float d;
  float e = 3.141;
  float f;

  d = 1.413;
  f = d + e;
  printf("The sum of %f and %f is %f\n", d, e, f);

  a = 3;

  if (a == 3) {
    printf("A is equal to 3\n");
  }
  else {
    printf("A is not equal to 3\n");
  }

  b = 1;

  while (b <= 5) {
    printf("B is equal to %d\n", b);
    b++;
  }
}
