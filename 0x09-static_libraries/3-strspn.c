#include "main.h"

/**
 * _strspn - search a string for a set of bytes
 * @s: source string
 * @accept: accepted string
 *
 * Return: number of bytes in the int segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int z = 0, b, t = 0;

	while (accept[z])
	{
		b = 0;
		while (s[b] != 32)
		{
			if (accept[z] == s[b])
			{
				t++;
			}
			b++;
		}
		z++;
	}
	return (t);
}
