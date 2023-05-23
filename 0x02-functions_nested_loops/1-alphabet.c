#include "main.h"

/**
 * print_alphabet - prints the alphabet
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	int n;

	for (n = 97; n <= 122; n++)
		_putchar(n);
	_putchar('\n');
}
