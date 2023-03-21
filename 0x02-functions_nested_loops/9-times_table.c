#include "main.h"
/**
 * times_table -my main
 *
 * Return: return no thing
 */
void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (j > 0)
			{
				_putchar(',');
				_putchar(' ');
				if (k > 9)
				{
					_putchar(k / 10 + '0');
					_putchar(k % 10 + '0');
				}
				else if (k <= 9)
				{
					_putchar(' ');
					_putchar(k + '0');
				}
			}
			else
			{
				_putchar(k + '0');
			}
		}
		_putchar('\n');
	}
}
