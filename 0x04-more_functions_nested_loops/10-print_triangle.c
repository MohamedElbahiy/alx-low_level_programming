#include "main.h"
/**
 * print_triangle - check the code
 *
 * @size: parameter
 *
 * Return: Always nothing.
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			j = size - i;

			while (j)
			{
				j--;

				_putchar(' ');
			}
			k = i;

			while (k)
			{
				k--;

				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
