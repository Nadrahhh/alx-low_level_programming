#include <stdio.h>

/**
 * main - program that prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 * Return: 0
 */

int main(void)
{
	int num;

	num = '0';
	while (num <= 16)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
