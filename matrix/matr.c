#include <stdio.h>
#include <stdlib.h>

#define ROW 4
#define COL 3

int main(){
  int matr[ROW][COL] = {{1,2,3},{5,6,7},{9,10,11},{13,14,15}};
  // print out the address of each entry in matr
  for (int i = 0; i < ROW; i++){
    for (int j = 0; j < COL; j++){
      printf("address = %p\n", &matr[i][j]);
    }
  }
  printf("matr[1][4] = %d\n", matr[1][4]);
  return 0;
}
