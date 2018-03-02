#include <stdio.h>
#include<string.h>
int
main (void) 
{
  
char s[40];
  
int d, i;
  
printf ("enter the string:");
  
scanf ("%s", s);
  
d = strlen (s);
  
if (d % 2 == 0)
    
    {
      
s[d / 2] = '*';
      
s[(d / 2) - 1] = '*';
    
}
  
  else
    
    {
      
s[d / 2] = '*';
    
}
  
printf ("\n%s", s);
  
return 0;

}


 
