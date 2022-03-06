#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {

   char text1[50];
   char text2[] = "Temp";
   char text3[] = "Hello this world";

   printf ("%s\n%s\n%s\n", text1, text2, text3);
   printf ("------------------------------------\n");   
   strcpy (text1, text3);

   printf ("%s\n%s\n%s\n", text1, text2, text3);
   
   return 0;
}
