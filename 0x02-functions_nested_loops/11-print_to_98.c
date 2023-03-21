#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - my main
 *
 * @n: parameter
 *
 * Return: return no thing
 */
void print_to_98(int n)
{
	int i;

	if (n != 98)
	{
		if (n < 98)
		{
			for (i = n; i < 98; i++)
			{
				printf("%d, ", i);
			}
			printf("%d\n", i);
		}
		if (n > 98)
		{
			for (i = n; i > 98; i--)
			{
				printf("%d, ", i);
			}
			printf("%d\n", i);
		}
	}
	else
	{
		printf("%d\n", n);
	}
}
