#include "main.h"
#include <stdio.h>

/**
 * _isupper - check the code.
 *
 * @c: parameter
 *
 * Return: Always 1,0.
 */

int _isupper(int c)
{
	int i;

	if (c >= 65 && c <= 90)
	{
		i = 1;
	}
	else if (c >= 97 && c <= 122)
	{
		i = 0;
	}
	return (i);
}
