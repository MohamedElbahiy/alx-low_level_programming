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
			printf("%0.Lf", k);
		}
		else if (x == 95 && x == 96)
		{
			k = k + 1;
			printf(", %0.Lf", k);
		}
		else if (x == 97)
		{
			k = k + 2;
			printf(", %0.Lf", k);
		}
		else
		{
			printf(", %0.Lf", k);
		}
	}
	printf("\n");
	return (0);
}
