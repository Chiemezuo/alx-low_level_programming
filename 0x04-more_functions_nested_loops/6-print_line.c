#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * followed by a new line.
 * @n: Arbitrary integer
 * Return: 0
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
