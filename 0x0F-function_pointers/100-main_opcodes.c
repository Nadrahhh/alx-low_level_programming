#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes of its own main function
 * @argc: number of arguement
 * @argv: array of arguement
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int byte, b;
	char *ary;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	byte = atoi(argv[1]);

	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ary = (char *)main;
	for (b = 0; b < byte; b++)
	{
		if (b == byte - 1)
		{
			printf("%02hhx\n", ary[b]);
			break;
		}
		printf("%02hhx", ary[b]);
	}
	return (0);
}
