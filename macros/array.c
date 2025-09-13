#include <stdio.h>
#include <stdlib.h>

#define SIZE 20
#define PROD(m,n) ((m)*(n))
#define POW(n) (1UL<<(n))

int main(){
  int ary[SIZE];
  for (int i = 0; i < SIZE; i++){
    ary[i] = i+1;
  }
  for (int i = 0; i < SIZE; i++){
    // alter the array here
    ary[i] = POW(ary[i]);
    printf("ary[%d] = %d\n", i, ary[i]);
  }
  return 0;
}
