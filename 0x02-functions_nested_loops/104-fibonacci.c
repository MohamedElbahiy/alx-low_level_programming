#include <stdio.h>
/**
 * main -my main
 *
 * Return: return 0
 */
int main(void)
{
	double i = 0;
	double j = 1;
	double k;
	int x;

	for (x = 0; x < 98; x++)
	{
		k = i + j;
		i = j;
		j = k;
		if (k == 1)
		{
			printf("%.f", k);
		}
		else
		{
			printf(", %.f", k);
		}
	}
	printf("\n");
	return (0);
}
