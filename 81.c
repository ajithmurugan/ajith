
#include <stdio.h>
#include<math.h>
void
main () 
{
  
int f1,f2, i;
  
printf ("enter the number");
  
scanf ("%d %d",&f1,&f2);
for(i=1;i<=3;i++)
{
    if(f1>f2)
    {
        printf("%d",f1-f2);
        
    }
    else
    {
        printf("%d",f2-f1);
        
    }
}
getch();
}
  



 
 
 
