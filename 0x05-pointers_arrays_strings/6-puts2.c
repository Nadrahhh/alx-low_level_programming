#include <stdio.h>
#include "main.h"

/**
 * puts2 - print every other character
 * @str: every character of a string
 *
 * Return: Always zero
 */

void puts2(char *str)
{
	int i = 0;

		while (*(str + i) != '\0')
		{
			if (i % 2 == 0)
				putchar(*(str + i));
			i++;
		}
	putchar(10);
}
