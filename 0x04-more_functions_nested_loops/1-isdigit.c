#include "main.h"
/**
 * _isdigit - check the code
 *
 * @c: parameter
 *
 * Return: Always 1 , 0.
 */
int _isdigit(int c)
{
	int i;

	if (c >= 48 && c <= 57)
	{
		i = 1;
	}
	else
	{
		i = 0;
	}
	return (i);
}
