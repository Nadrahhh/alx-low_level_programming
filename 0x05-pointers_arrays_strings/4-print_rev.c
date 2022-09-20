#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - prints a string
 * @s: string to reverse
 *
 * Return: void
 */

void print_rev(char *s)
{
	int c = strlen(s);

	while (c--)
		putchar(*(s + c));
	putchar('\n');
}
