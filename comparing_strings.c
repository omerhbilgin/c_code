#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {
  
   char str1[] = "abcd1xyzt";
   char str2[] = "abcd1";

   int result = strcmp (str1, str2);
   int result_2 = strncmp (str1, str2, 15);


   printf ("%d\n", result);
   printf ("%d\n", result_2);

   return 0;
}
