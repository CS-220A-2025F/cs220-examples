#include <stdio.h>
#include <stdlib.h>

int main(){
  struct str1{
    unsigned long u;
    int n;
    long l;
  };

  struct str2{
    short s;
    float f;
    char ary[21];
  };

  printf("sizeof(struct str1) = %lu\n",sizeof(struct str1));
  printf("sizeof(struct str2) = %lu\n",sizeof(struct str2));
}
