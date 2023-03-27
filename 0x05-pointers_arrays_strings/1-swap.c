#include "main.h"
/**
 * swap_int - my main
 *
 * @a: parameter
 *
 * @b: parameter
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
