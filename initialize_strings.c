#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {

   char str[] = "Hello!";
   
   printf ("%s\n", str);
   str[0] = 'h';
   printf ("%s\n", str);

   char *str2 = malloc (50 * sizeof(char));
   strcpy (str2, "Hello world!");

   printf ("%s\n", str2);
   str2[0] = 'h';
   printf ("%s\n", str2);


   return 0;
}
