#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char **argv) {
   
   if (argc != 2) {
      fprintf (stderr, "usage: <%s> <word>\n", argv[0]);
      exit (1);
   }

   char str[] = "Apples are good for your health";
   printf ("string: %s\n", str);
   printf ("------------------------------------\n");

   char word[20];
   strcpy (word, argv[1]);

   char *result = strstr(str, word);

   if (result) {
      printf ("the word has been found at location %lu\n", result - str);
   } else {
      printf ("the word has NOT been found\n");
   }     

   return 0;
}
