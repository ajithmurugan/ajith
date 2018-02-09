
 
#include<stdio.h>
  int
main () 
{
  
int s, v;
  
printf ("Enter the number\n");
  
scanf ("%d", &s);
  
v = s - 1;
  
if (v % 2 == 0)
    
    {
      
printf ("%d", v);
    
}
  
  else
    
    {
      
printf ("%d", v - 1);
    
}
  
return 0;

}
