#include<stdio.h>
int
main ()
{
  int a;
  printf ("Enter  your percentage  to get grade:--> ");
  scanf ("%d", &a);
  if (a >= 40)
    {
      if (a >= 90)
	{
	  printf ("EXCELLENT");
	}
      else if (a >= 80)
	{
	  printf ("VERY GOOD");
	}
      else if (a >= 70)
	{
	  printf ("GOOD");
	}
      else if (a >= 60)
	{
	  printf ("CAN DO BETTER");
	}
      else if (a >= 50)
	{
	  printf ("AVERAGE");
	}
      else if (a >= 40)
	{
	  printf ("BELOW  AVERAGE");
	}
    }
  else
    {
      printf ("Fail");
    }
}
