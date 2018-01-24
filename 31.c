#include<stdio.h>
int main()
{
	char a[32],count=0,i;
	gets(a);
	for(i=0;a[i]!=NULL;i++)
	{
	count++;
	if(a[i]==' ')
	count--;
	}
	printf("%d",count);
	return 0;
	}
