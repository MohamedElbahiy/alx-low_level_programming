#include <stdio.h>

/**
 * main - is my main function
 *
 * Return: return o
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i <= 9)
			putchar(i + '0');
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
