#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int value = 100; // TODO: Craft a message that alters this value

char *getString(){
  char buff[100];
  printf("&buff = %p\n", &buff);
  printf("Enter a message:\n");
  gets(buff);
  char *str = malloc(20);
  strcpy(str, buff);
  return str;
}

int main(){
  char *str = getString();
  printf("Message: %s\n", str);
  printf("Value = %d\n", value);
  free(str);
  return 0;
}
