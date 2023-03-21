#include "main.h"
/**
 * print_last_digit - my main
 *
 * @r: parameter
 *
 * Return: return r
 */
int print_last_digit(int r)
{
	r = r % 10;
	if (r < 0)
	{
		r = -r;
	}
	_putchar(r + '0');
	return (r);

}
