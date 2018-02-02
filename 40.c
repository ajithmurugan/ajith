#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,f1=0,f2=1,nextterm=0;
    printf("enter the value");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("\nfibonaci sereis\n");
        nextterm=f1+f2;
        f1=f2;
        f1=nextterm;
        printf("%d",nextterm);
    }
getch();
}
