#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void toLower(char str[]){
  // convert upper case letters in str to lower case in-place
  int len = strlen(str);
  for (int i = 0; i < len; i++){
    if (str[i] >= 'A' && str[i] <= 'Z'){
      str[i] += 32;
    }
  }
}

char *toLowerCpy(char str[]){
  // make a copy of str, convert upper case -> lower case, and return a pointer to it
  int len = strlen(str);
  char *newStr = malloc((len+1)*sizeof(char));
  strcpy(newStr, str);
  for (int i = 0; i < len; i++){
    if (newStr[i] >= 'A' && newStr[i] <= 'Z'){
      newStr[i] += 32;
    }
  }
  return newStr; 
}

int main(){
  char *str1 = "Hello, World!";
  char *str = malloc(20*sizeof(char));
  strcpy(str,str1);
  printf("BEFORE: %s\n", str1);
  toLower(str);
  printf("AFTER: %s\n", str);
  printf("ORIGINAL: %s\n", str1);
  char *str2 = toLowerCpy(str1);
  printf("NEW: %s\n", str2);
  return 0;
}
