/* Checks numbers for repeated digits */

#include <stdbool.h>    /* C99 only */
#include <stdio.h>

int main(void)
{

  int digit;
  long n, input;
  int digit_seen[10];
  bool repeated;

  printf("Enter a number (Enter an input <= 0 to exit): ");
  scanf("%ld", &input);

  while (input > 0) {
    n = input;
    repeated = false;
    for (int i = 0; i < 10; i++) digit_seen[i] = 0;
  while (n > 0) {


    digit = n % 10;
    if (digit_seen[digit] == 1)
      repeated = true;
    digit_seen[digit] += 1;
    n /= 10;
  }

  if (repeated) {
    printf("Repeated digits: ");
    for (int i = 0; i < 10; i++) {
      if (digit_seen[i] > 1) printf("%d ", i);
    }
    printf("\n");
  }
  else
    printf("No repeated digit\n");

  printf("Enter a number (Enter an input <= 0 to exit): ");
  scanf("%ld", &input);

  }
  

  return 0;
}
