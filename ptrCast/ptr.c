#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(){
  // set ptr_i to ptr_v and ptr_l to ptr_i
  // make sure we aren't getting warnings
  void *ptr_v = malloc(8);
  int *ptr_i = ptr_v;
  long *ptr_l = (long *) ptr_i;

  // TODO: set the values to which ptr_i and
  // ptr_i+1 point to 100 and 200 respectively,
  // and print *ptr_i and *ptr_l
  // again, make sure there are no warnings

  *ptr_i = 0x64;
  *(ptr_i + 1) = 0xc8;

  printf("*ptr_i = %x, *ptr_l = %lx\n", *ptr_i, *ptr_l);
  // TODO: clear the lower 13 bits of ptr_v
  printf("BEFORE: ptr_v = %p\n", ptr_v);
  uintptr_t res = (uintptr_t) ptr_v;
  res &= ~((1UL << 13)-1);
  ptr_v = (void *) res;
  printf("AFTER: ptr_v = %p\n", ptr_v);
  
  return 0;
}
