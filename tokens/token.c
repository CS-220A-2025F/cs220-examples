#include <stdio.h>
#include <stdlib.h>

char *stringTok(char *str, char delim);

int main(){
  /* This program should print all tokens in the string str
     i.e. all non-empty substrings separated by a single
     space
  */
  char str[] = "These are tokens separated  by spaces.";
  char *token = stringTok(str, ' ');
  int i = 1;
  while (token != NULL){
    printf("token %d: %s\n", i, token);
    token = stringTok(NULL, ' ');
    i++;
  }
  return 0;
}

char *stringTok(char *str, char delim){
  /* 1) If str != NULL, save it in a static variable
     savedStr.
     2) If the saved string is empty (i.e. no tokens
     remain), return NULL
     3) Otherwise, iterate through the saved string and
     replace the first instance of the delimiter 'delim'
     with a null byte and return a pointer to where the
     saved string started initially, while updating
     savedStr to the address of the character after the
     null byte that was just written.
  */
  static char * savedStr;
  if (str != NULL) savedStr = str;
  if ('\0' == *savedStr) return NULL;
  char * retStr = savedStr;
  while (*savedStr != delim && *savedStr != '\0')
    savedStr++;
  *savedStr = '\0';
  do {savedStr++;} while (*savedStr == delim); // fix this so empty strings won't be returned
  return retStr; 
}
