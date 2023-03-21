#include <stdio.h>
/**
 * main -my main
 *
 * Return: return 0
 */
int main(void)
{
	long double i = 0;
	long double j = 1;
	long double k;
	int x;

	for (x = 0; x < 98; x++)
	{
		k = i + j;
		i = j;
		j = k;
		if (k == 1)
		{
			printf("%Lf", k);
		}
		else
		{
			printf(", %Lf", k);
		}
	}
	printf("\n");
	return (0);
}
