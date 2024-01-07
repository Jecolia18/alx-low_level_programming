#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @n: numbers of argument
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	va_start(
