#include <stdio.h>

#define GENERIC_MAX(type)         \
type type##_max(type x, type y)   \
{                                 \
   return x > y ? x : y;          \
}                                 \

GENERIC_MAX(float);

int main (int argc, char **argv) {

   float x = 3.14, y = 3.15;
   printf ("x: %.2f  y: %.2f\n", x, y);

   float max = float_max (x, y);
   printf ("max of x & y : %.2f\n", max);

   return 0;
}
