#include "main.h"
/**
 * reverse_array - my main
 *
 * Return: return nothing
 *
 * @a: parameter
 *
 * @n: parameter
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int k;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		k = a[i];
		a[i] = a[j];
		a[j] = k;
	}
}
