
#include<stdio.h>
  int
main () 
{
  
int a, i, r1 = 0, r2 = 1, sum = 0;
  
scanf ("%d", &a);
  
for (i = 0; i < a; i++)
    
    {
      
printf ("%d ", r2);
      
sum = r1 + r2;
      
r1 = r2;
      
r2 = sum;
    
}

 
}
