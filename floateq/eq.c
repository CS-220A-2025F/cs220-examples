#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int floatEq(float a, float b){
  return (fabs(a-b) <= 1.0e-7);
}

int main(){
  union {
    float fl;
    unsigned char bytes[4];
  } unVal;
  
  float a = 0.1;
  float b = 0.8;
  float c = 0.9;
  // print the concrete bytes of a + b
  unVal.fl = a + b;
  printf("Bytes of a + b = 0x");
  for (int i=3; i >=0; i--){
    printf("%x", unVal.bytes[i]);
  }
  putchar('\n');
  // print the concrete bytes of c
  unVal.fl = c;
  printf("Bytes of c = 0x");
  for (int i=3; i>=0; i--){
    printf("%x", unVal.bytes[i]);
  }
  putchar('\n');
  // check if a + b = c
  if (floatEq(a+b, c))
    printf("%f + %f == %f\n",a,b,c);
  else
    printf("%f != %f????\n",a+b,c);

  return 0;
}
