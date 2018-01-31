#include <stdio.h>
#include<string.h>

int main(void) {
	char b[100]="hello hai.haiii";
	 int i,count=0;
	for(i=0;b[i]!='\0';i++)
	{
		if(b[i]=='.')
			count++;
	}
	printf("NO. OF lines %d",count+1);
	return 0;
}
