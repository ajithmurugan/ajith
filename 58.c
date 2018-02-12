#include<stdio.h>
#include<conio.h>
void
main ()
{
  int a = 150, b = 120;
  printf ("enter before swapping %d %d\n", a, b);
  a = a ^ b;
  b = a ^ b;
  a = a ^ b;
  printf ("enter before swapping %d %d\n", a, b);
  getch ();
}
