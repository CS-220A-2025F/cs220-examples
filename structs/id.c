#include <stdio.h>
#include <stdlib.h>

struct person {
  char name[20];
  int age;
  int idNum;
};

typedef struct person * person;

person createPerson(char name[], int age){
  /* Return a pointer to a new person struct.
     The name and age should to initialized
     to the name and age passed in as
     parameters. The ID number field should
     be set sequentially according to the
     order in the struct instance was created
     by this function, starting at 1
  */
  return NULL; // change this
}

void printPerson(person p){
  // print each field in the struct
}

void set_age(person p, int age){
  // set person p's age to the "age" passed in
  p->age = age;
}

int main(){
  
  return 0;
}
