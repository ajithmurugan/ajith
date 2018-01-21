
#include<stdio.h>
int main()
{
int hours,minutes,c;
printf("enter the c values");
scanf("%d",&c);
if(c%c==0)
{
hours=c/60;
minutes=c%60;
printf("%d%d",&hours,&minutes);
}
return 0;
}
