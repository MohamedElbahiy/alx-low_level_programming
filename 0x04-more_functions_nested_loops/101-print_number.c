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
	unsigned int i;

	i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -i;
	}
	if ((i / 10) > 0)
	{
		print_number(i / 10);
	}
	_putchar((i % 10) + 48);
}
