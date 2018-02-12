#include<stdio.h>
int main(void)
{
  int s,t,temp;
  scanf("%d %d",&s,&t);
  temp=s;
  s=t;
  t=temp;
  printf("%d %d",s,t);
  
return 0;
}
