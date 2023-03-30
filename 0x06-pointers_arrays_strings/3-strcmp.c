#include "main.h"
/**
 * _strcmp - my main
 *
 * Return: return int
 *
 * @s1: parameter
 *
 * @s2: parameter
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			i = (int)*s1 - (int)*s2;
			break;
		}
		s1++;
		s2++;
	}
	return (i);
}
