#include "main.h"
/**
 * _strncat - my main
 *
 * Return: return char
 *
 * @dest: parameter
 *
 * @src: parameter
 *
 * @n: parameter
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dl = 0;
	int sl = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		dl++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		sl++;
	}
	if (n <= sl)
	{
		for (i = 0; i < n; i++)
		{
			dest[dl + i] = src[i];
		}
	}
	else
	{
		for (i = 0; i < sl; i++)
		{
			dest[dl + i] = src[i];
		}
	}
	return (dest);
}
