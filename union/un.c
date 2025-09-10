#include <stdio.h>
#include <stdlib.h>

int main(){
  union intBytes{
    int val;
    unsigned char bytes[4];
  } num;
  num.val = 0x54671122;
  printf("number = 0x%x\n", num.val);
  num.bytes[1] = 0x67; 
  printf("byte 0 = 0x%x\n", num.bytes[0]);
  printf("byte 1 = 0x%x\n", num.bytes[1]);
  printf("byte 2 = 0x%x\n", num.bytes[2]);
  printf("byte 3 = 0x%x\n", num.bytes[3]);
  printf("number = 0x%x\n", num.val);

  return 0;
}
