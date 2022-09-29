#include "main.h"

/**
 * _puts_recursion - a string followed by anew line
 * @s: output data
 *
 * Return: always 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_print_rev_recursion(s + 1);
	}
}
