#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {

   char array[3][50];
   
   strcpy (array[0], "Hello world!");
   strcpy (array[1], "Test");
   strcpy (array[2], "Omer");

   printf ("Strings are: \n\n%s\n%s\n%s\n", array[0], array[1], array[2]);

   return 0;
}
