#include <stdio.h>

typedef struct Point {
   double x;
   double y;
} Point;

int main (int argc, char *argv[]) {

   Point p = {.x = 0.25, .y = 0.36};

   printf ("%f\n%f\n\n", p.x, p.y);

   return 0;
}
