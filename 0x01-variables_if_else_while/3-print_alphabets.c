#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line.
 * You can only use the putchar
 * Return: 0
 */
int main(void)
{
	char lower;
	char upper;

	lower = 'a';
	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	upper = 'A';
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
