#include "main.h"

/**
 * _strlen - my main
 *
 * Return: return nothing
 *
 * @s: parameter
 */

int _strlen(char *s)
{
	int i;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		j++;
	}
	return (j);
}
