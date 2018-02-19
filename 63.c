
#include <stdio.h>
#include<conio.h>
  void
main () 
{
  
char s[80];
  
int n, i, count = 0;
  
scanf ("%[^\t\n]s", s);
  
n = strlen (s);
  
for (i = 0; i < n; i++)
    
    {
      
if (s[i] == ' ')
	
	{
	  
count++;
	
}
      
      else
	
	{
	  
continue;
	
}
    
}
  
printf ("%d", count + 1);
  
getch();

}


 
 
