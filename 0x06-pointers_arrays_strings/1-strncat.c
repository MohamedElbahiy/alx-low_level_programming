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

	for (i = 0; dest[i] != '\0'; i++)
	{
		dl++;
	}
	for (i = 0; i < n; i++)
	{
		dest[dl + i] = src[i];
	}
	return (dest);
}
