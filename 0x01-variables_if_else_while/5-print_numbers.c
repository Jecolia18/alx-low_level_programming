#include <stdio.h>

/**
 * main - prints all single digit numbers
 *
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
