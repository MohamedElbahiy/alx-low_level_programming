#include "main.h"
#include <stdio.h>
/**
 * print_times_table - my main
 *
 * @n: parameter
 *
 * Return: return no thing
 */
void print_times_table(int n)
{
	int i;
	int j;
	int k;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (j != n)
				{
					if (k <= 9)
					{
						printf("%d,   ", k);
					}
					else if (k <= 99)
					{
						printf("%d,  ", k);
					}
					else
					{
						printf("%d, ", k);
					}
				}
				else
				{
					printf("%d", k);
				}
			}
			printf("\n");
		}
	}
}
