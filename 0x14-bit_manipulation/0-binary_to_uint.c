#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary to a unsigned int number
 * @b:string of binary number
 *
 * Return: sum
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int power, sum;
	int i;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}
	for (power = 1, sum = 0, i--; i >= 0; i--, power *= 2)
	{
		if (b[i] == '1')
		{
			sum += power;
		}
	}
	return (sum);
}
