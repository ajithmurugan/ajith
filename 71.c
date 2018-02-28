#include<stdio.h>
void
main () 
{
  
char d[20];
  
int i, length;
  
printf ("\n Enter a number:");
  
gets (d);
  
length = strlen (d);
  
for (i = 0; i <= length; i++)
    
    {
      
if (d[i] != d (length - i - 1))
	
	{
	  
printf ("\n string is palindrome");
	
}
      
      else
	
	{
	  
printf ("\n String is not palindrome");
	
}
    
}
  
getch ();

}


