#include "main.h"

/**
 * _memset - fill memory with constant bytes
 * @s: memory area to fill
 * @b: constant byte to fill
 * @n: byte of memory area to fill
 *
 * Return: the memory area filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		s[c] = b;
	}
	return (s);
}
