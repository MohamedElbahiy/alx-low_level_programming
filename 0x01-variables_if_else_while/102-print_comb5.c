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

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 9; j++)
		{
			for (k = 0; k < 10; k++)
			{

				for (n = 1; n < 10; n++)
				{

					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(n + '0');
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
