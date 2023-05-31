#include "main.h"

/**
 * _puts - prints a string
 * @str: variable containing str
 * Return: nothing
 */
void _puts(char *str)
{
	int  c = 0;

	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
	}
	if (str[c] == '\0')
	{
		_putchar('\n');
	}
}
