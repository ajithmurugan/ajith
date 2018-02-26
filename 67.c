#include <stdio.h>
#include<conio.h>

void
main ()
{
  int s;
  printf (" enter the number ");
  scanf ("%d", &s);
  s+= 1;
  while (s % 10 != 0)
    {
      s = s + 1;
    }
  printf ("\n %d", s);
  
  getch();
}
