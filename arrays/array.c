#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void printAry(int ary[], int len);

int main(){
  int ary[SIZE];
  // int len = sizeof(ary)/sizeof(int);
  // printf("length of ary = %d\n", len);
  for (int i = 0; i < SIZE; i++){
    ary[i] = 2*i+1;
  }
  printAry(ary, SIZE);
}

void printAry(int ary[], int len){
  // print the value of each element in the array
  // int len = sizeof(ary)/sizeof(int);
  for (int i = 0; i < len; i++){
    printf("array at index %d = %d\n", i, ary[i]);
  }
}
