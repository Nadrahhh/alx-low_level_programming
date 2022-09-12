#include <stdio.h>

/**
 * main - program that prints the lowercase alphabet in reverse,
 * followed by a new line.
 * Return: 0
 */

int main(void)
{
	char revlower;

	revlower = 'z';
	while (revlower >= 'a')
	{
		putchar (revlower);
		revlower--;
	}
	putchar('\n');
	return (0);
}
