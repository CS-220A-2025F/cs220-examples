#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  if (argc < 3){
    fprintf(stderr, "Usage: ./printMultiples num max\n");
    return 1;
  }
  int num = atoi(argv[1]);
  int max = atoi(argv[2]);
  // TODO: print all multiples of 'num' up to 'max', each on a separate line
  int mult = num;
  while (mult <= max){
    printf("%d\n", mult);
    mult += num;
  }
  return 0;
}
