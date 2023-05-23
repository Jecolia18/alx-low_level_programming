#include <stdio.h>
#include "main.h"

/**
 * main - function that prints the alphabet
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	int n;

	for (n = 97; n <= 121; n++)
		_putchar(n);
	_putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}
