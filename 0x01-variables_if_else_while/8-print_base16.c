#include <stdio.h>

/**
 * main - program that prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 * Return: 0
 */

int main(void)
{
	int num;
	int letters;

	num = 0;
	letters = 'a';
	while (num <= 10)
	{
		putchar(num);
		num++;
	}
		while (letters <= 'f')
		{
			putchar(letters);
			letters++;
		}
		putchar('\n');
		return (0);
}
