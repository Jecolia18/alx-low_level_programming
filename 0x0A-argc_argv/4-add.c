#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: the result
 */
int main(int argc, char *argv[])
{
	int i;
	int g = 0;

	for (i = 1; i < argc; i++)
	{
		char *p = argv[i];
		char c = *p;

		if ((c >= 'a') && (c <= 'z'))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			g += atoi(argv[i]);
		}
	}
	printf("%i\n", g);
	return (0);
}
