#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguements
 *
 * @argc: member of arguements
 *
 * @argv: array of arguements
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
