#include <stdio.h>

void main (void) {
  char input[256];
  int age;

  printf("What is your name?\n");
  scanf("%s", input);
  printf("How old are you?\n");
  scanf("%d", &age);
  printf("Your name is %s and you are %d\n", input, age);
}
