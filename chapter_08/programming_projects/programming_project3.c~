/* Checks numbers for repeated digits */

#include <stdbool.h>    /* C99 only */
#include <stdio.h>

int main(void)
{
  int digit_seen[10] = {0};
  int digit;
  long n;
  bool repeated = false;
  

  printf("Enter a number: ");
  scanf("%ld", &n);


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
  

  return 0;
}
