#include "main.h"
/**
 * print_square - check the code
 *
 * @size: parameter
 *
 * Return: Always nothing.
 */
void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (j = 0; j < size; j++)
		{
			for (i = 0; i < size; i++)
			{			
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
