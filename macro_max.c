#include <stdio.h>
#include <stdlib.h>

#define MAX(x,y) ((x)>(y)?(x):(y))
#define IS_EVEN(n) ((n)%2==0)

int main (int argc, char **argv) {
   printf ("is %d even?\n%d\n", atoi(argv[1]), IS_EVEN(atoi(argv[1])));

   int a = 5, b = 6;
   printf ("max of a and b : %d\n", MAX(a,b));

   return 0;
}
