#include <stdio.h>

/**
 * main - Write a program that prints all single digit numbers of base
 * 10 starting from 0, followed by a new line.
 * Return: 0
 */

int main(void)
{
	int num;

	num = '0';
	while (num < 10)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
