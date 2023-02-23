#include "main.h"

/**
 * print_most_numbers - Prints the numbers 0 - 9.
 * Except 2 and 4, then a new line.
 * Return: 0
 */
void print_most_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}
