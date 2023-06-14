#include <stdlib.h>
#include "main.h"
/**
 * *create_array - creates an array of chars
 * @size: the size of the array
 * @c: the specific char initialization
 *
 * Return:NULL if size equal 0
 * return a pointer if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
		return (str);
}
