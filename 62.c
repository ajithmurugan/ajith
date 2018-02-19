
#include <stdio.h>
#include<string.h>
void 
main () 
{
  
 
char s[100];
  
 
int t, i, num, count = 0;
  
 
scanf ("%s", s);
  
 
t = strlen (s);
  
 
for (i = 0; i < t; i++)
    
 
    {
      
 
if (s[i] == '0' || s[i] == '1')
	
 
	{
	  
 
count++;
	
 
}
      
 
      else
	
 
	{
	  
 
printf ("no..");
	
 
 
}
    
 
}
  
 
if (t == count)
    
 
    {
      
 
printf ("yes...it is in binary representation");
    
 
}
}
 
getch ();
