#include "main.h"
/**
 * puts_half - my main
 *
 * Return: return nothing
 *
 * @str: parameter
 */
void puts_half(char *str)
{
	int i;
	int l;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		l++;
	}
	if (l % 2 == 0)
	{
		j = l / 2;
		for (i = 0; i <= j; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
	else if (l % 2 != 0)
	{
		j = (l - 1) / 2;
		for (i = 0; i <= j; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}
