#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {

   char text[100];
   char text2[100];

   printf ("Type a line of text: \n");
   scanf ("%[^\n]s", text);
   getchar();

   fgets (text2, 100, stdin);   
   text2[strlen(text2) - 1] = '\0';

   printf ("--------------------------------\n");   
   printf ("You typed the lines: \n%s\n%s\n", text, text2);

   return 0;
}  
