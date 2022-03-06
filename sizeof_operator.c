#include <stdio.h>

int main (int argc, char *argv[]) {
   printf ("sizeof(int): %lu\n", sizeof(int));
   int array[3] = {1, 4, 5};
   int array2[10] = {0};

   printf ("3-element array: %lu\n", sizeof(array));
   printf ("10-element array: %lu\n", sizeof(array2));
   printf ("length of 10-element array: %lu\n", sizeof(array2) / sizeof(int));
   printf ("-----------------------\n");
   printf ("%lu, %lu\n", sizeof(sizeof(int)), sizeof(sizeof(char)));
   
   printf ("Bye bye birdy!\n");

   return 0;
}
