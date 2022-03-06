#include <stdio.h>

void getNextFive (int x, int* array) {
   int i;
   for (i=0; i<5; i++) {
      array[i] = x + i;
   }
}

int main (int argc, char *argv[]) {
   int x = 5; // 5 6 7 8 9
   int arr[5];

   getNextFive (x, arr);

   for (int i=0; i<5; i++) { 
      printf ("%d ", arr[i]);
   }

   printf ("\n");

   return 0;
}
