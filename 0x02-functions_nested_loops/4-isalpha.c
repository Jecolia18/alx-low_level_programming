#include "main.h"

/**
 * _isalpha - checks for lowercase and uppercase
 * @c: the letter to check
 *
 * Return: 1 is c is lower case or uppercase 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
