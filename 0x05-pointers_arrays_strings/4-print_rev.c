#include "main.h"
/**
 * print_rev - my main
 *
 * @s: parameter
 *
 * Return: return nothing
 */

void print_rev(char *s)
{
	int i;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		j++;
	}
	for (i = j; i >= 0; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
