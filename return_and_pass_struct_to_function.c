#include <stdio.h>

typedef struct Point {
   double x;
   double y;
} Point;

/*
// First method (pass by value)
Point getMiddlePoint (Point a, Point b) {
   Point m;
   m.x = (a.x + b.x) / 2;
   m.y = (a.y + b.y) / 2;
  
   return m;   
}
*/

/*
// Second method (pass by reference)
Point getMiddlePoint (const Point *a, const Point *b) {
   Point m;
   m.x = (a->x + b->x) / 2;
   m.y = (a->y + b->y) / 2;

   return m;
}
*/

void getMiddlePoint (const Point *a, const Point *b, Point *out) {
   out->x = (a->x + b->x) / 2;
   out->y = (a->y + b->y) / 2;
}

int main (int argc, char *argv[]) {
   Point p1 = {
      .x = 1,
      .y = 1 
   };

   Point p2 = {
      .x = 3,
      .y = 2
   };    
   
   printf ("\n");
   printf ("p1 = (%f, %f)\np2 = (%f, %f)\n", p1.x, p1.y, p2.x, p2.y);
   printf ("\n");

   Point middle;
   getMiddlePoint (&p1, &p2, &middle);

   printf ("%f %f\n", middle.x, middle.y);
   printf ("\n");   

   return 0;
}
