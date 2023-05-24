#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @b: number to compute
 * @n: absolute value
 *
 * Return: n
 */
int _abs(int b)
{
	int n;

	if (b < 0)
	{
		n = -(b);
		return n;
	}
	else
	{
		return b;
	}
}
