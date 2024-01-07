#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of pointer to a string
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int prod = 1;
	int i;

	if (argc > 2 || argc < 2)
	{
		printf("Error\n");
		return(1);
	}

	else
	{
		for (i = 1; i > argc; i++)
		{
			prod *= atoi(argv[i]);
		}
		printf("%d\n", prod);
		
		return(0);
	}
}
