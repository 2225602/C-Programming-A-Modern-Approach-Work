#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);

int main(void)
{
  char board[10][10];
  generate_random_walk(board);
  

  print_array(board);
  
  return 0;
}

// Generates the walk board
void generate_random_walk(char walk[10][10]) 
{

  for (int i = 0; i < 10; i++)
    for (int j = 0; j < 10; j++)
      walk[i][j] = '.';
  bool checked_direction[4] = {false};
  int remaining_walks = 26;
  char current_char = 'A';
  int x_pos = 0, y_pos = 0;
  bool moved;
  srand((unsigned) time(NULL));

  while (remaining_walks > 0) {
    checked_direction[0] = false, checked_direction[1] = false, checked_direction[2] = false, checked_direction[3] = false;
    moved = false;
    while (!checked_direction[0] || !checked_direction[1] || !checked_direction[2] || !checked_direction[3]) {

      // Get a possible direction

      int direction = rand() % 4;

      //printf("Remaining Walks: %d    --   Chosen direction: %d\n", remaining_walks, direction);
      //printf("Coordinates: (%d, %d)\n", x_pos, y_pos);
      //printf("%d, %d, %d, %d\n", checked_direction[0], checked_direction[1], checked_direction[2], checked_direction[3]);

      // If this direction is already checked, try another one.
      if (checked_direction[direction]) continue;
      else switch (direction) {
	case 0:  // GO UP
	  if (y_pos == 0 || walk[y_pos - 1][x_pos] != '.') {
	    // You can't go up if you're already on the top row or if it's occupied.
	    checked_direction[0] = true;
	    continue;
	  } else {
	    walk[y_pos][x_pos] = current_char++;
	    y_pos--;
	    remaining_walks--;
	    moved = true;
	  }
	  break;
	case 1:  // GO DOWN
	  if (y_pos == 9 || walk[y_pos + 1][x_pos] != '.') {
	    // You can't go down if you're already on the bottom row or if it's occupied.
	    checked_direction[1] = true;
	    continue;
	  } else {
	    walk[y_pos][x_pos] = current_char++;
	    y_pos++;
	    remaining_walks--;
	    moved = true;
	  }
	  break;
	case 2: // GO LEFT
	  if (x_pos == 0 || walk[y_pos][x_pos - 1] != '.') {
	    // Can't go left when it's the left border or if it's occupied.
	    checked_direction[2] = true;
	    continue;
	  } else {
	    walk[y_pos][x_pos] = current_char++;
	    x_pos--;
	    remaining_walks--;
	    moved = true;
	  }
	  break;
	case 3: // GO RIGHT
	  if (x_pos == 9 || walk[y_pos][x_pos + 1] != '.') {
	    // Can't go right when it's the right border or if it's occupied.
	    checked_direction[3] = true;
	    continue;
	  } else {
	    walk[y_pos][x_pos] = current_char++;
	    x_pos++;
	    remaining_walks--;
	    moved = true;
	  }
	  break;	  
	}
      if (moved) break;
    }

    if (checked_direction[0] && checked_direction[1] && checked_direction[2] && checked_direction[3]) {
      walk[y_pos][x_pos] = current_char;
      break;
    }

  }
}

// Prints the board
void print_array(char walk[10][10]) 
{
  // Print the board
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      printf("%c", walk[i][j]);
    }
    printf("\n");
  }
}
