#include "main.h"
<<<<<<< HEAD
/**
 * main - my main
 *
 * Return: return 0
 */
int main(void)
{
	int i;
	for (i = 1; i <= 100; i++)
	{
	
		if (i != 1)
		{
			if ((i % 3 == 0) && (i % 5 == 0))
			{
				printf(" FizzBuzz");
			}
			else if (i % 3 == 0)
			{
				printf(" Fizz");
			}
			else if (i % 5 == 0)
			{
				printf(" Buzz");
			}
			else
			{
				printf(" %d", i);
			}
		}
		else
		{
			printf(" %d", i);
		}

	}
	printf("\n");
	return (0);
=======

int main(void)
{
  for (i = 1; i <= 100; i++)
  {
    if (i != 1)
    {
      if ((i % 3 == 0) && (i % 5 == 0))
      {
        printf(" FizzBuzz");
      }
      else if (i % 3 == 0)
      {
        printf(" Fizz");
      }
      else if (i % 5 == 0)
      {
        printf(" Buzz");
      }
      else
      {
        printf(" %d", i);
      }
    }
    else
    {
      printf(" %d", i);
    }
  }
  printf("\n");
>>>>>>> 359c69e3a37128795d920a0ab75c59a2310394f5
}
