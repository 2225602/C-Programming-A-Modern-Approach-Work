#include <stdio.h>

int main(void)
{

  int matrix[5][5] = {0};

  for (int row = 0; row < 5; row++) {
    printf("Enter row %d: ", row + 1);
    for (int column = 0; column < 5; column++) {
      int num; scanf("%d", &num);
      matrix[row][column] = num;
    }
  }

  int row_sums[5] = {0}, column_sums[5] = {0};

  // Compute sums of rows
  for (int row = 0; row < 5; row++) {
    int sum = 0;
    for (int column = 0; column < 5; column++) {
      sum += matrix[row][column];
    }
    row_sums[row] = sum;
  }

  // Compute sums of columns
  for (int column = 0; column < 5; column++) {
    int sum = 0;
    for (int row = 0; row < 5; row++) {
      sum += matrix[row][column];
    }
    column_sums[column] = sum;
  }

  printf("Row totals: %d %d %d %d %d\n", row_sums[0], row_sums[1],
	 row_sums[2], row_sums[3], row_sums[4]);

  printf("Column totals: %d %d %d %d %d\n", column_sums[0],
	 column_sums[1], column_sums[2], column_sums[3], column_sums[4]);

  return 0;
}
