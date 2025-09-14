#include <stdio.h>
#include <stdlib.h>

void printBytes(unsigned char ary[], int len){
  printf("0x");
  for (int i = len-1; i >=0; i--) printf("%02x",ary[i]);
  printf("\n");
}

int main(){
  union {
    double val;
    unsigned char bytes[8];
  } unDbl;

  union {
    float val;
    unsigned char bytes[4];
  } unFl;

  union {
    unsigned long val;
    unsigned char bytes[8];
  } unUlng;
  
  return 0
}
