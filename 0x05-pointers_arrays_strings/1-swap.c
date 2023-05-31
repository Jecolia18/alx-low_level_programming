#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: first pointers
 * @b: second pointers
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int g;

	g = *a;
	*a = *b;
	*b = g;
}
