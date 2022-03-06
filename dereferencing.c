#include <stdio.h>

int main (void) {

   int a = 16;
   int* p = &a;

   //   printf ("%d %p\n", p, p);
   printf ("%d\n", *p);

   printf ("--------------------\n");
   // second part

   int arr[] = {5, 13, 22};
   printf ("%d\n", *arr);
   printf ("%d\n", arr[0]);


   return 0;
}
