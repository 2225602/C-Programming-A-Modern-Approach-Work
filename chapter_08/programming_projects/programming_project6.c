#include <stdio.h>
#include <ctype.h>

int main(void)
{

  char buffer[100];
  int char_count = 0, max_count;
  char current_char = {0};
  printf("Enter message: ");


  do {
    buffer[char_count++] = (current_char = getchar());
  } while (current_char != '\n');

  max_count = char_count;
  for (char_count = 0; buffer[char_count] != '\n'; char_count++){
    current_char = toupper(buffer[char_count]);
    switch (current_char) {
    case 'A':
      putchar('4');
      break;
    case 'B':
      putchar('8');
      break;
    case 'E':
      putchar('3');
      break;
    case 'I':
      putchar('1');
      break;
    case 'O':
      putchar('0');
      break;
    case 'S':
      putchar('5');
      break;
    default:
      putchar(current_char);
    }
  }
  printf("!!!!!!!!!!\n");
  return 0;
  
  
}
