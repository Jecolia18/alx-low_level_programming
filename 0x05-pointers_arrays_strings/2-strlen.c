#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int p = 0;

	while (s[p] != '\0')
	{
		p++;
	}
	return (p);
}

