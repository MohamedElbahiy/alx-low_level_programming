#include <stdio.h>
/**
 * main - my main
 *
 * Return: return 0
 */
int main(void)
{
	long long i = 0;
	long long j = 1;
	long long k;
	int x;

	for (x = 0; x < 50; x++)
	{
		k = i + j;
		i = j;
		j = k;
		if (k == 1)
		{
			printf("%lld", k);
		}
		else
		{
			printf(", %lld", k);
		}
	}
	printf("\n");
	return (0);
}
