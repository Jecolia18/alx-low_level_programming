#include "main.h"

void _try_recurs(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_try_recurs(s + 1);
	}
	if (*s == '\0')
	{
		_putchar('\n');
	}
}
