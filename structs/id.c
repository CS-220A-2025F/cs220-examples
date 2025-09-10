#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
  static int id = 0;
  id++;
  person p = malloc(sizeof(struct person));
  strcpy(p->name, name);
  p->age = age;
  p->idNum = id;
  return p; 
}

void printPerson(person p){
  // print each field in the struct
  printf("name = %s\n", p->name);
  printf("age = %d\n", p->age);
  printf("id number = %d\n", p->idNum);
}

void set_age(person p, int age){
  // set person p's age to the "age" passed in
  p->age = age;
}

int main(){
  person p1 = createPerson("Derek", 19);
  person p2 = createPerson("Alice", 50);
  printPerson(p1);
  printPerson(p2);
  return 0;
}
