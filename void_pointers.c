#include <stdio.h>
#include <limits.h>

void printBytes2 (int *arr, int n) {
   int i;
   for (i=0; i<n; i++) {
      printf ("%08x  ", arr[i]);
   }
}

void printBytes (void *arr, int n) {
   int i;
   for (i=0; i<n; i++) {
      printf ("%02x ", ((char*)arr)[i]);
   }
}

int main (int argc, char *argv[]) {

   int arr2[] = {16,31,32,65};
   int arr[] = {12144, 30325, 6312, 11651235};

   printBytes2 (arr, 4);
   printf ("\n");
   printBytes (arr, sizeof(arr));
   printf ("\n");

   return 0;
} 




/*
int main (int argc, char *argv[]) {

   int arr[] = {16, 31, 32, 65};

   printBytes(arr, 4);
   printf ("\n");

   return 0;
}
*/
