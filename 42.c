#include "stdio.h"

int main(void) {
  char b[1000],c[1000];
  int i,j,count1=0,count2=0;
  scanf("%s",&c);
  scanf("%s",&c);
  for(i=0;b[i]!='\0';i++)
  {
    count1=count1+1;
  }
   for(j=0;c[j]!='\0';j++)
    {
      count2=count2+1;
    }
  if(count1>count2)
  {
    printf("%s",b);
  }
  else
  {
    printf("%s",c);
  }
  return 0;
}
