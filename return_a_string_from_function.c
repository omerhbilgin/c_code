#include <stdlib.h>
#include <stdio.h>
#include <string.h>

const char* getLiteralString () {
   return "hello there!";
}

void getString (char *str) {
   strcpy (str, "hello babe");   
   
}

int main (int argc, char *argv[]) {
   const char* s = getLiteralString();
   
   char* text = malloc (100);
   getString(text);

   printf ("%s\n", s);   
   printf ("%s\n", text);

   return 0;
}  
