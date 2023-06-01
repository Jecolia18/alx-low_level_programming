#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to work with
 *
 * Return: no return
 */
void print_rev(char *s)
{
	int c = 0;
	int i, len;

	while (s[c] != '\0')
	{
		c++;
	}
	len = c;
	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
