#include <stdio.h>

int main()
{
		int b[100]={2,1,3}; 
int i,j,c=3,temp;
for(i=0;i<c;i++)
{
	for(j=i+1;j<c;j++)
	{
		if(b[i]>b[j])
		{
		temp=b[i];
		b[i]=b[j];
		b[j]=temp;
		}
	}
}

c=(c+1)/2-1;
printf("%d",b[c]);

	return 0;
}
