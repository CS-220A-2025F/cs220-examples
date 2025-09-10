#include <stdio.h>
#include <stdlib.h>

void counter();

int main(){
  counter();
  counter();
  counter();
  counter();

  return 0;
}

void counter(){
  // TODO: fix this so that it correctly keeps count
  static int count = 0;
  count++;
  printf("counter has been called %d times\n", count);
}
