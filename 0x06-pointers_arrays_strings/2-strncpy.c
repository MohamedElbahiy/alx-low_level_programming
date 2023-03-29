#include "main.h"
/**
 * _strncpy - my main
 *
 * Return: return char
 *
 * @dest: parameter
 *
 * @src: parameter
 *
 * @n: parameter
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int sl = 0;
	int dl = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		sl++;
	}
	for (i = 0; dest[i] != '\0'; i++)
	{
		dl++;
	}
	if (n > sl)
	{
		for (i = 0; i < sl; i++)
		{
			dest[i] = src[i];
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			dest[i] = src[i];
		}
	}
	return (dest);
}
