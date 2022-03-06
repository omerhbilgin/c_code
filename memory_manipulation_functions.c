#include <stdio.h>
#include <string.h>

void printArray (int *array, int n) {
   int i;
   for (i=0; i<n; i++) {
      printf ("%d ", array[i]);
   }
   printf ("\n");
}

int main (int argc, char *argv[]) {
   
   int arr1[] = {1, 3};
   int arr2[] = {1, 2};

   if (memcmp (arr1, arr2, 2 * sizeof(int)) == 0)
      printf ("Arrays are the same\n");
   else
      printf ("Arrays are NOT the same\n");

   printArray (arr1, 2);
   printArray (arr2, 2);

   printf ("----------------------------\n");

   memcpy (arr1, arr2, 2 * sizeof(int));

   if (memcmp (arr1, arr2, 2 * sizeof(int)) == 0)
      printf ("Arrays are the same\n");
   else
      printf ("Arrays are NOT the same\n");

  printArray (arr1, 2);
  printArray (arr2, 2);

   printf ("-----------------------------\n");

   if ( memchr (arr1, 0, 2 * sizeof(int)) != NULL )
      printf ("Found the byte!\n");
   else
      printf ("Did NOT find the byte!\n");
   
   printf ("-----------------------------\n");

   // memset

   memset (arr1, 0, 2 * sizeof(int));
   memset (arr2, 1, 2 * sizeof(int));

   printArray(arr1, 2);
   printArray(arr2, 2);

   printf ("-----------------------------\n");
   
   
   return 0;
}
