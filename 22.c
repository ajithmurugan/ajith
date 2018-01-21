#include<stdio.h>
void main()
{
int i,c, b[10],maxi;
scanf("%d",&c);
for(i=0;i<c;i++)
{
scanf("%d",&b[i]);
}
maxi=b[0];
for(i=0;i<c;i++)
{
if(maxi<b[i])
maxi=b[i];
}
printf("%d",maxi);
}
