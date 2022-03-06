#include <stdio.h>

void sumAndProduct (int a, int b, int* sumPointer, int* productPointer) {
   
   *sumPointer = a+ b;
   *productPointer = a * b;
}


int main (int argc, char *argv[]) {
   int x = 5, y = 12;
   int sum, product;

   sumAndProduct (x, y, &sum, &product);

   printf ("x: %d, y: %d\nsum: %d, product: %d\n", x, y, sum, product);
   

   return 0;
}  
