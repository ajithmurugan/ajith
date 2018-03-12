#include<conio.h>
#include<stdio.h>
void
main ()
{
  int s, i;
  printf ("enter the value \n");
  scanf ("%d", &s);
  for (i = 1; i < s; i++)
    {
      if (s % i == 0)
	{
	  printf ("%d", i);
	}
    }
  getch ();
}
