
#include <stdio.h>
int
main ()
{
  int n, i;
  scanf ("%d", &n);
  int flag = 1;
  for (i = 2; i < n / 2; i++)
    {

      if (n % i == 0)
	{
	  flag = 0;
	}
      else
	{
	  flag = 1;
	}
    }
  if (flag == 1)
    {
      printf ("prime ");
    }
  else
    {
      printf ("not a prime");
    }
}
