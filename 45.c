
#include<stdio.h>
void main()
{
int r,count =0,t;
printf("\n  enter number \n");
scanf("%d",&r);
while(r>0)
{
r=r/10;
t=r;
count++;
}
printf("\n number of digits%d",count);

}
