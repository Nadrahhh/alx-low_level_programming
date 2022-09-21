#include "main.h"

/**
 * _strcat - concentinating two string
 * @dest: concensinate
 * @src: concentinate
 *
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	char *nadest = dest, *nasrc = src;

	while (*nadest)
		nadest++;
	while (*src)
	{
		*nadest = *src;
		nadest++;
		src++;
	}
	*nadest = '\n';

	return (dest);
}
