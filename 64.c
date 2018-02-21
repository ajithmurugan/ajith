#include<stdio.h>
#include<conio.h>
void
main ()
{
  int n, a, b;
  printf ("enter the two values %d %d \t", a, b);
  scanf ("%d %d", &a, &b);
  n = a + b;
  if (n % 2 == 0)
    {
      printf ("the number is even \t");

    }
  
  else
    {
      printf ("the number is odd \t");
    }getch ();
}
