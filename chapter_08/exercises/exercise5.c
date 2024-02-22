#include <stdio.h>
#define LENGTH 40
int main(void)
{
  int fibs[LENGTH] = {[0] = 0, [1] = 1};

  for (int i = 2; i < LENGTH; i++) {
    fibs[i] = fibs[i - 1] + fibs[i - 2];
  }

  printf("First 40 Fibonacci numbers: ");
  for (int i = 0; i < LENGTH; i++)
    printf(" %d", fibs[i]);

  printf("\n");
  return 0;
}
