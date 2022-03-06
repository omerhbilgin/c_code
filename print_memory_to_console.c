#include <stdio.h>

typedef struct {
   int test; // 4 bytes
   char k; // 1 byte
   char str[10]; // 10 bytes
   int *p; // 8 bytes 
   short sh; // 2 bytes
} Thing;

int main (int argc, char *argv[]) {
   int i,n ;
   Thing t = {12, 'k', "testing", &i, 256};
   
   printf ("%lu\n", sizeof(t));
   unsigned char data;
   for (i=0, n=sizeof(t); i<n; i++) {
      if (i % 4 == 0)
         printf ("\n");

      data = *((unsigned char*)&t + i);
      printf ("%02x ", data);
   }

   return 0;
}
