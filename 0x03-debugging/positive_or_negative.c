#include "main.h"

/**
 * positive_or_negative - checks for number sign
 *
 * Return: 0
 */
void positive_or_negative(int i)
{
	printf("%d", i);
	if (i > 0)
	{
		printf(" is positive\n");
	}
	else if (i == 0)
	{
		printf(" is zero\n");
	}
	else
	{
		printf(" is negative\n");
	}
}
