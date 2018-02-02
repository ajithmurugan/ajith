#include<stdio.h>
int main()
{
	int h,t;
	scanf("%d\t%d",&h,&t);
	h^=t;
	t^=h;
	h^=t;
	printf("%d\t%d",h,t);
	return 0;
}
