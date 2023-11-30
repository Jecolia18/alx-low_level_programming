#include "function_pointers.h"

/**
 * array_iterator - executes a function given as parameter
 * @array: the array
 * @size: the array's size
 * @action: a pointer to the function to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int elem;

	if (array == NULL || action == NULL)
		return;

	for (elem = 0; elem < size; elem++)
		action(array[elem]);
}
