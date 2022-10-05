#include <stdio.h>

/**
 * main - write a program that prints its name
 *
 * @argc: this is the arguement count
 * @argv: this is the arguement vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
