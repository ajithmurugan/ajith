
#include<stdio.h>
  int
main () 
{
  
int s, rem, sum = 0;
  
scanf ("%d", &s);
  
while (s!= '\0')
    
    {
      
rem = s % 10;
      
sum = sum + rem;
      
s = s/ 10;
    
}
  
printf ("%d", sum);
  
return 0;

}
