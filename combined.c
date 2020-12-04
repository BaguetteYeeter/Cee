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

  float g;
  g = 3;

  if (g == 3) {
    printf("g is equal to 3\n");
  }
  else {
    printf("g is not equal to 3\n");
  }
}
