#include "main.h"

/**
 * print_alphabet_x10 - prints ten times alphabet
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int n, b;

	b = 0;

	while (b <= 10)
	{
		for (n = 97; n <= 122; n++)
		{
			_putchar(n);
		}
			_putchar('\n');
		b++;
	}
}
