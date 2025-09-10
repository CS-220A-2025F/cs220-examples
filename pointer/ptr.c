#include <stdio.h>
#include <stdlib.h>

int main(){
  int a = 3;
  int b = 5;
  int *ptr = &a;
  *ptr -= b;
  ptr = &b;
  *ptr *= a;
  b += 1;
  printf("a = %d, b = %d, *ptr = %d\n", a, b, *ptr);
  return 0;
}
