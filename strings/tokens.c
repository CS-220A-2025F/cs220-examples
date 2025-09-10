#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  /* This program should print all tokens in the string str
     i.e. all non-empty substrings separated by a single
     space
  */
  char str[] = "These are tokens separated by spaces.";
  char *token = strtok(str, " ");
  int i = 1;
  while (token != NULL){
    printf("token %d: %s\n", i, token);
    token = strtok(NULL, " ");
    i++;
  }
  return 0;
}
