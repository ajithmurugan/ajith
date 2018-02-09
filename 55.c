#include<stdio.h>
#include<conio.h>
void
main()
{
  int a, b, sum = 0;
  printf ("\nenter the two number\n");
  scanf ("%d%d", &a, &b);
  sum = a * b;
  if (sum%2==0)
    {
      printf ("\nnumber is even\n");
    }
  else
    {
    printf ("\nnumber is odd\n");
        
    }
  getch ();
}
