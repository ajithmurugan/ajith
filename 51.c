#include <stdio.h>
int main() 
{
    int h,rev=0,rem;
    scanf("%d",&h);
    while(h!='\0')
    {
        rem=h%10;
        rev=(rev*10)+rem;
        h=h/10;
    }
    h=rev;
    while(h!='\0')
    {
        rem=h%10;
        printf("%d ",rem);
        h=h/10;
	}
	return 0;
}
