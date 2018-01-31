#include<stdio.h>
void main()
{
    char g[100]="welcome 23456&@";
    int i,count=0;
    for(i=0;g[i]!='\0';i++)
    {
        if(g[i]=='0'||g[i]=='1'||g[i]=='2'||g[i]=='3'||g[i]=='4'||g[i]=='5'||g[i]=='6'||g[i]=='7'||g[i]=='8'||g[i]=='9'||g[i]=='&'||g[i]=='@')
        count++;
        
    }
    printf("the number of special character %d",count);
}
