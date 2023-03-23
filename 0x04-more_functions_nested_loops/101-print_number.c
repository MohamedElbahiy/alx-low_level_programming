#include "main.h"
/**
 * print_number - check the code
 *
 * @n: parameter
 *
 * Return: Always nothing.
 */
void print_number(int n)
{
	int i;

	i = n;

	if ((n > 9) && (n < -9))
	{
		while (i > 9)
		{
			_putchar(i % 10 + '0');
			i = i % 10;
		}
		while (i < -9)
		{
			_putchar(i % 10 + '0');
			i = i % 10;
		}
	}
	else
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
