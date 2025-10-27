#include <stdio.h>
#include <stdlib.h>

long fact_asm(int n); // returns n factorial using recursion

int main(int argc, char *argv[]){
  int n = atoi(argv[1]);
  for (int i=1; i <=n; i++){
    printf("fact(%d) = %ld\n", i, fact_asm(i));
  }
  return 0;
}
