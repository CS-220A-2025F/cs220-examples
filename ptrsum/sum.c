#include <stdio.h>
#include <stdlib.h>

int sumArr(int ary[], int len){
  // sum the entries in the array using pointer notation
  int sum = 0;
  for (int *p = ary; p < ary + len; p++){
    sum += *p;
  }
  return sum; 
}

int main(int argc, char *argv[]){
  int ary[argc-1];
  for (int i = 1; i < argc; i++){
    ary[i-1] = atoi(argv[i]);
  }
  int sum = sumArr(ary,argc-1);
  printf("sum = %d\n", sum);
  return 0;
}
