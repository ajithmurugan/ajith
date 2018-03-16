
#include <stdio.h>
#include<math.h>
  int
main () 
{
  
int b, r, i, k = 0, a[20];
  
printf ("enter the number");
  
scanf ("%d", &b);
  
while (b > 0)
    
    {
      
 
r = b % 10;
      
 
if ((r % 2) != 0)
	
	{
	  
a[k] = r;
	  
k++;
	
}
      
b = b / 10;
    
}
  
 
for (i = k - 1; i >= 0; i--)
    
    {
      
printf ("%d\t", a[i]);
    
}
  
 
return 0;

}


 
 
 
