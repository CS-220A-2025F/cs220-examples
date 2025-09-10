#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  // check if str1 and str2 are the same
  char *str1 = "Hello, World!";
  char *str2 = malloc(14*sizeof(char));
  strcpy(str2,str1);
  if (strcmp(str1,str2)==0)
    printf("str1 and str2 are the same\n");
  else
    printf("str1 and str2 are different\n");

  return 0;
}
