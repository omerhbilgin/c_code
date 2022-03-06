#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {

   int *p = (int*) malloc(sizeof(int)); // calloc would have
                                 // set all of the allocated memory to 0
   *p = 5;
   printf ("the value is: %d\n", *p);

   int *a = (int*) malloc(3 * sizeof(int));

   a[0] = 3;
   a[1] = 4;
   a[2] = 5;

   printf ("the values are: %d %d %d\n", a[0], a[1], a[2]);

   free(p);
   free(a);

   return 0;
}
