#include <stdio.h>
int
main (void)
{
  int s[10], i, highest;
  for (i = 0; i < 10; i++)
    scanf ("%d", &s[i]);
  for (i = 0; i < 10; i++)
    printf ("%d\n", s[i]);
 highest = s[0];
  for (i = 0; i < 10; i++)
    if (s[i] > highest)
      highest = s[i];
  printf ("%d is the largest number",highest);
  return 0;
}
