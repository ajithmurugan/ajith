#include<stdio.h>
int main()
{
char a[100],count=0,i;
gets(a);
for(i=0;a[i]!=NULL;i++)
{
if(a[i]==' ')
count++;
}
printf("%d",count);
return 0;
}
