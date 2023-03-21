#include <stdio.h>
/**
 * main -my main
 *
 * Return: return 0
 */
int main(void)
{
	unsigned long long int i = 0;
	unsigned long long int j = 1;
	unsigned long long int k;
	int x;

	for (x = 0; x < 98; x++)
	{
		k = i + j;
		i = j;
		j = k;
		if (k == 1)
		{
			printf("%llu", k);
		}
		else
		{
			printf(", %llu", k);
		}
	}
	printf("\n");
	return (0);
}
