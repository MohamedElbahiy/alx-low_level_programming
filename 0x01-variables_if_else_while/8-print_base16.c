#include <stdio.h>

/**
 * main - is my main function
 *
 * Return: return 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
