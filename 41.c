#include<conio.h>
#include<string.h>
void main()
{
    int h,i; char d[100];
    printf("enter the string");
    scanf("%d",&h);
    gets(d);
    for(i=1;i<=h;i++)
    {
      puts(d);
      puts("\n");
    }
    getch();
}
