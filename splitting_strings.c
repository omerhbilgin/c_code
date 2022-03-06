#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {

   char str[] = "Let's break this string into pieces";


/*
   // strtok (string, delimiter)
   char *piece = strtok (str, " ");
   printf ("%s\n", piece);

   piece = strtok (NULL, " ");
   printf ("%s\n", piece);
*/

   char *piece = strtok (str, " ");
   
   while (piece != NULL) {
      printf ("%s\n", piece);   
      piece = strtok (NULL, " ");
   }


   return 0;
}
