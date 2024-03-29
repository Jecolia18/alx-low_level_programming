#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character b to stdout
 * @b: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char b)
{
	return (write(1, &b, 1));
}
