#include <stdio.h>
/**
 * main - my main
 *
 * Return: return 0
 */

int main(void)
{
	int x;
	int i;

	for (i = 0; i <= 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 ==0))
		{
			x = x + i;
		}
	}
	printf("%d\n", x);
	return (0);
}
