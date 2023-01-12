#include <stdio.h>

#define ROWS 3
#define COLS 3

int main() {
  
  int arr[ROWS][COLS] = {{5, 2, 8}, {4, 1, 0}, {6, 10, 9}};

  
  int max = arr[0][0];
  int min = arr[0][0];

 
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      if (arr[i][j] > max) {
        max = arr[i][j];
      }
      if (arr[i][j] < min) {
        min = arr[i][j];
      }
    }
  }

  
  printf("Max: %d\n", max);
  printf("Min: %d\n", min);

  return 0;
}