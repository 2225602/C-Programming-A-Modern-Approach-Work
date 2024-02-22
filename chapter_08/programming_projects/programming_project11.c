#include <stdio.h>
#include <ctype.h>
int main(void)
{

  char number[15];
  int current_char = ' ';
  int char_count = 0;
  int max_char;
  printf("Enter a phone number: ");

  while ((current_char = getchar()) != '\n')
    number[char_count++] = toupper(current_char);

  max_char = char_count;
  printf("In numeric form: ");
  for (int i = 0; i < max_char; i++) {
    current_char = number[i];
		switch(current_char) {
			case 'A': case 'B': case 'C':
				putchar('2');
				break;
			case 'D': case 'E': case 'F':
				putchar('3');
				break;
			case 'G': case 'H': case 'I':
				putchar('4');
				break;
			case 'J': case 'K': case 'L':
				putchar('5');
				break;
			case 'M': case 'N': case 'O':
				putchar('6');
				break;
			case 'P': case 'R': case 'S':
				putchar('7');
				break;
			case 'T': case 'U': case 'V':
				putchar('8');
				break;
			case 'W': case 'X': case 'Y':
				putchar('9');
				break;
			default:
				putchar(current_char);
		}
  }
  printf("\n");
  
  return 0;  
}
