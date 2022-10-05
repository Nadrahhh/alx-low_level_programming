#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multipliestwo numbers
 * @argc: this is the arguement count
 * @argv: arguments vector
 *
 * Return: 0;
 */

int main(int argc, char *argv[])
{
	int index, mul;

	mul = 1;
	if (argc < 3)
	{
		printf("Error\n");
			return (1);
	}
	for (index = 1; index < argc; index++)
	{
		mul = mul * atoi(argv[index]);
	}
	printf("%d\n", mul);
	return (0);
}
