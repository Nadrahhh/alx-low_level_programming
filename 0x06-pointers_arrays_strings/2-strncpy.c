#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: works like strncpy
 * @src: works like strncpy
 * @n: works well
 *
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int b = 0, c = 0;

	while (src[c])
	{
		c++;
	}
	while (b < n && src[b])
	{
		dest[b] = src[b];
		b++;
	}
	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}
	return (dest);
}
