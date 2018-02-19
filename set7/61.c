#include <stdio.h>

void main() 
{
	char s[10];
	scanf("%s",s);
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the chr %c \t",s[i]);
	}
	getch ();
}
