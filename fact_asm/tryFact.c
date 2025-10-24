#include <stdio.h>
#include <stdlib.h>

long fact_asm(int n); // returns n factorial using recursion

int main(int argc, char *argv[]){
  int n = atoi(argv[1]);
  printf("fact(%d) = %ld\n", n, fact_asm(n));
  return 0;
}
