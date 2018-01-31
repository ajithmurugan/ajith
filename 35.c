#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main(void) 
{
	char b[100];
	int n,i,count=0;
	printf("\nEnter the string: ");
	scanf("%[^\n]%*c",&b);
	for(i=0;b[i]!='\0';i++)
	{
		if(isdigit(b[i]))
		{
			count+=1;
		}
	}
	printf("\nThere a %d digits in the sentence.",count);
	return 0;
}
