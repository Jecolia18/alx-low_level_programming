#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of parameters
 * @n: arguments
 * @sum: the sum of all parameters
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;
	unsigned int iterator;
	int sum = 0;

	va_start(arguments, n);

	for (iterator = 0; iterator < n; iterator++)
	{
		sum += va_arg(arguments, int);
	}

	va_end(arguments);

	return(sum);
}
