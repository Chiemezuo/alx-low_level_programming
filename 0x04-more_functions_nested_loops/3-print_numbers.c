#include "main.h"

/**
 * print_numbers - Prints the numbers 0 to 9,
 * then a new line.
 * Return: 0
 */
void print_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
