#include <stdio.h>

int main(void)
{
  const int segments[10][7] =
    {
      {1, 1, 1, 1, 1, 1, 0},
      {[1] = 1, [2] = 1},
      {1, 1, 0, 1, 1, 0, 1},
      {1, 1, 1, 1, [6] = 1},
      {0, 1, 1, 0, [5] = 1, 1},
      {1, 0, 1, 1, 0, 1, 1},
      {1, 0, 1, 1, 1, 1, 1},
      {[0] = 1, 1, 1},
      {1, 1, 1, 1, 1, 1, 1},
      {1, 1, 1, 1, 0, 1, 1},
    };

  printf("Segment displays: \n");
  for (int i = 0; i < 10; i++) {
    printf("Segment %d -", i);
    for (int j = 0; j < 7; j++) {
      printf(" %d", segments[i][j]);
    }
    printf("\n");
  }
    return 0;
}
