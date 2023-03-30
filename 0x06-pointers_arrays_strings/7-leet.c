#include "main.h"
/**
 * leet - my main
 *
 * Return: return char
 *
 * @s: parameter
 */
char *leet(char *s)
{
	char x[] = {'A', 'E', 'O', 'T', 'L'};
	int y[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*s)
	{
		for (i = 0; i < (sizeof(x) / sizeof(char)); i++)
		{
			if (*s == x[i] || *s == x[i] + 32)
			{
				*s = 48 + y[i];
			}
		}
		s++;
	}
	return (s);
}
