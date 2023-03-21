#include <stdio.h>
/**
 * main - my main
 *
 * Return: return 0
 */
int main(void)
{
	int i = 0;
	int j = 1;
	int k;
	int x;

	for (x = 0; x < 50; x++)
	{
		k = i + j;
		i = j;
		j = k;
		if (k == 1)
		{
			printf("%d", k);
		}
		else
		{
			printf(", %d", k);
		}
	}
	printf("\n");
	return (0);
}
