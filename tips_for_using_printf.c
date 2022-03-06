#include <stdio.h>

int main (int argc, char *argv[]) {

   float a = 2.55;

   // %.2f two digits after the period
   // %8d right aligned, 8 characters in total 
   // %08d right aligned, adding 0's on the left
   // %X capital hex
   // %#x adds 0x prefix
   // %p for addresses
   printf ("%f\t%.2f\n", a, a);

   return 0;
}
