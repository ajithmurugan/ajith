
#include<stdio.h>
void main()
{
int c[10],n,i,sum=0,d;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&c[i]);
}
for(i=0;i<n;i++)
{
sum=sum+c[i];
d=sum/n;
}
printf("%d",d);
}
