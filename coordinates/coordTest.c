#include <stdio.h>
#include <stdlib.h>
#include "coord.h"

int main(int argc, char * argv[]){
  /* create a new coordinate pair, whose x- and y-coordinates
  are specified in the first and second command line arguments resp.
  then print the value of each coordinate to verify that they were
  initialized correctly
  */
  int x = atoi(argv[1]);
  int y = atoi(argv[2]);
  coord ptr = coord_create(x,y);
  printf("x-coordinate = %d, y-coordinate = %d\n", coord_getx(ptr), coord_gety(ptr));
  return 0;
}
