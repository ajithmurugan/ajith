#include <stdio.h>
void main()
{
	int s,q,temp;
	printf("%d%d",s,q);
	scanf("%d%d",&s,&q);
	if(s>q)
	{
		temp=s;
		s=q;
		q=temp;
	}
	printf("%d%d",&s,&q);
}
