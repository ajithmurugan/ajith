

#include<stdio.h>
#include<conio.h>
void main()
{
int num=0,i,n,b[100],large,small;
printf("Enter  total number");
scanf("%d",&n);
printf("Enter  numbers");
for(i=0;i<=n;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<n;i++)
{
large=small=b[0];
if(b[i]>large)
large=b[i];
if(b[i]<small)
small=b[i];
}
printf("%d is  largest number",large);
printf("%d is  smallest number",small);
}
