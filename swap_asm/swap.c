#include <stdio.h>

void swap_asm(int *a, int *b);

int main(){
  int a = 100;
  int b = 200;

  printf("a = %d, b = %d\n",a,b);
  swap_asm(&a,&b);
  printf("a = %d, b = %d\n",a,b);

  return 0;
}
