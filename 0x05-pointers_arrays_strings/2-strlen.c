#include "main.h"

/**
 * int _strlen - write a function that returns the lenght of a string
 *
 * Return: 0 .
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0' ; s++)
	{
		c++;
	}
	return (c);
}
