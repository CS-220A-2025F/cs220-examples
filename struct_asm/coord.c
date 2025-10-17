#include <stdio.h>
#include <stdlib.h>

struct coord_struct {
  int x;
  int y;
  int z;
};

typedef struct coord_struct * coord;

void coord_set(coord p, int x, int y, int z);

int main(int argc, char *argv[]){
  int x = atoi(argv[1]);
  int y = atoi(argv[2]);
  int z = atoi(argv[3]);
  coord p = malloc(sizeof(struct coord_struct));
  coord_set(p,x,y,z);
  printf("p->x = %d\n", p->x);
  printf("p->y = %d\n", p->y);
  printf("p->z = %d\n", p->z);
  return 0;
}
