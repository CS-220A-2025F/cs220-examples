#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  float a = 0.1;
  float b = 0.8;
  float c = 0.9;
  if (a + b == c)
      printf("%f + %f == %f\n",a,b,a+b);
  else
    printf("%f + %f != %f????\n",a,b,a+b);

  return 0;
}
