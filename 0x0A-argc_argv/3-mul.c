#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the result of a multiplication
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int i = atoi(argv[1]) * atoi(argv[2]);

		printf("%i\n", i);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
