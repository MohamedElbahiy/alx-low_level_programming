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

	for(i = 0; str[i] != '\0'; i++)
	{
		l++;
	}
	if (l % 2 == 0)
	{
		for (i = l / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
	else if (l % 2 != 0)
	{
		for (i = (l - 1) / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}

	
}
