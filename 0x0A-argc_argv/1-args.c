#include "main.h"

/**
 * main - prints the number of arguments
 * @argc: the number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on sucess
 */
int main(int argc, char *argv[])
{
	printf("%i\n", argc - 1);

	(void)argv;

	return (0);
}
