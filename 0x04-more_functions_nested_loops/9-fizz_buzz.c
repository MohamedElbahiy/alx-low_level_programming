#include <stdio.h>
/**
 * fizz_buzz - check the code
 *
 * Return: Always 0.
 */

int fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i != 1)
		{
			if (i % 3 == 0 && i % 5 == 0)
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
			printf("%d", i);
		}
	}
	printf("\n");
	return (0);
}
