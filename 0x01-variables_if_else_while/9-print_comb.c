#include <stdio.h>

/**
 * main - prints all digit combinations
 *
 * Return: always 0
 */
int main(void)
{
	int n;
	int a = 32;
	int b = 44;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n != 57)
		{
		putchar(b);
		putchar(a);
		}
	}
	putchar('\n');
return (0);
}
