#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase,
 *followed by a new line.
 * you can only use the putchar
 * Return: 0
 */

int main(void)
{
	char lower;

	lower = 'a';
	while (lower <= 'z')
	{
		if (lower != 'e' && lower != 'q')
			putchar(lower);
		lower++;
	}
	putchar('\n');
	return (0);
}
