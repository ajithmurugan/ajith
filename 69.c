#include <conio.h>
#include<stdio.h>
void main()
{

  int a,b,sub;
  printf ("enter the 1st  value \t");
  scanf ("%d", &a);
  printf("enter the 2nd value \t");
  scanf("%d",&b);
  sub=a-b;
  if (sub % 2 == 0)
    {
      printf ("\n that value is even");

    }
  else
    {
      printf ("\n that value  is odd");

    }
  getch ();
}
