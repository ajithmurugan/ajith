

#include <stdio.h>
void main()
{
int s,t;
printf("\n enter the number");
scanf("%d",&s);
t=(s&(s-1));
if(t==0)	
printf("yes");
else
printf("no");
  }
