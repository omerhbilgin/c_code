#include <stdio.h>
#include <stdlib.h>

#define MAKE_ID(n) i##n

int main (int argc, char **argv) {
   int j;

   int MAKE_ID(1) = 231, MAKE_ID(2) = 12341, MAKE_ID(3) = 3789;

   printf ("%d  \n", MAKE_ID(1));


   return 0;
}
