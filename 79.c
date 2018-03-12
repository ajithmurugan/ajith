#include <stdio.h>
#include<conio.h>
void main() 
{
    int s,t,r,i;
    printf("enter the values \n");
    scanf("%d",&s);
    scanf("%d",&t);
    r=s*t;
    for(i=0;i<r;i++)
    {
        if(r==(i*i))
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }
    }
    getch();
}

