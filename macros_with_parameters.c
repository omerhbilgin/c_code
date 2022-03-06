#include <stdio.h>

#define PRINT_VAR(X) printf(#X " = %d, at address %p\n", X, &X)
#define SWAP(A, B) A ^= (B ^= (A ^= B))

int main (int argc, char *argv[]) {
   int number = 3;
   PRINT_VAR(number);

   int a = 3, b = 5;

   printf ("a: %d   b: %d\n", a, b);
   SWAP (a, b);
   printf ("a: %d   b: %d\n", a, b);

   return 0;
}
