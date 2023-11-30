#include "function_pointers.h"

/**
 * int_index - searches fo an integer
 * @array: array of integer
 * @size: size of the array
 * @cmp: pointer to the function to be used
 *
 * Return: index for which cmp don't return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (array != NULL && cmp != NULL)
	{
		for (n = 0; n < size; n++)
		{
			if (cmp(array[n]) != 0)
				return (n);
		}
	}
	return (-1);
}
