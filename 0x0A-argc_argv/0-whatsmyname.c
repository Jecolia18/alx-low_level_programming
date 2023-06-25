#include <stdio.h>
#include "main.h"
/**
 * main - prints the program's name
 *@argc: the number of argument
 *@argv: an array of size argc
 *
 * Return: always 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
