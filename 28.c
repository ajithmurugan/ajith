#include<stdio.h>
void main()
{
 int c,i,b[c];
scanf("%d\n",&c);
for(i=0;i<c;i++)
{
 scanf("%d ",&b[i]);
 }
for(i=0;i<c;i++)
{
 printf("%d %d",b[i],i);
}
}
