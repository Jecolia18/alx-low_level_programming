#include <stdio.h>

/**
 * main - prints alphabet without e and q
 *
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 97; n <= 122; n++)
	if (n != 113 && n != 101)
		putchar(n);
	putchar('\n');
	return (0);
}
