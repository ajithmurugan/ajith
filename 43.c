#include <stdio.h>
#include<conio.h>
 
int main()
{
   char f[100], d[100];
 
   printf("Enter a string\n");
   gets(f);
 
   printf("Enter a string\n");
   gets(d);
 
   if (strcmp(f,d) == 0)
      printf("Entered strings are equal.\n");
   else
      printf("Entered strings are not equal.\n");
 
   return 0;
getch();
}
