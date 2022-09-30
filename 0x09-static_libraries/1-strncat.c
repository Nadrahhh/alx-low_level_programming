#include "main.h"

/**
 * _strncat - a function that concatenates two stringswith strncat
 * @dest: concatenate strings
 * @src: concatenate strings
 * @n: int strings
 *
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int nad = 0, k = 0;

	while (dest[nad])
	{
		nad++;
	}

	while (k < n && src[k])
	{
		dest[nad] = src[k];
		nad++;
		k++;
	}

	dest[nad + n + 1] = '\0';
	return (dest);
}
