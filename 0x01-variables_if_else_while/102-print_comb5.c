#include <stdio.h>

/**
 * main - is my main function
 *
 * Return: return 0
 */
int main(void)
{
	int i;
	int j;
	int k;
	int n;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 9; j++)
		{
			for (k = 0; k < 10; k++)
			{

				for (n = 0; n < 10; n++)
				{
					if (k != 0 || n != 0)
					{
						putchar(i + '0');
						putchar(j + '0');
						putchar(' ');
						putchar(k + '0');
						putchar(n + '0');
					}
					if (i != 9 && j != 8)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
