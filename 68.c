#include <conio.h>
#include<stdio.h>
void main()
{

  int n;
  printf ("enter the value \t");
  scanf ("%d", &n);
  if (n % 7 == 0)
    {
      printf ("\n this value is multiple of 7");

    }
  else
    {
      printf ("\n this value  is not multiple of 7");

    }
  getch ();
}
