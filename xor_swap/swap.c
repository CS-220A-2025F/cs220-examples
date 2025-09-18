#include <stdio.h>
#include <stdlib.h>

void swap(int *num1, int *num2){
  //TODO: swap *num1 and *num2 without using a temp variable
  *num1 = *num1 ^ *num2;
  *num2 = *num1 ^ *num2;
  *num1 = *num1 ^ *num2;
}

int main(){
  int a = 100;
  int b = 200;
  printf("a = %d, b = %d\n", a, b);
  swap(&a, &b);
  printf("a = %d, b = %d\n", a, b);
}
