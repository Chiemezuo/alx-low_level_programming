#include "main.h"
void print_integer(int m);

/**
 * print_number - Prints an integer.
 * @n: The integer
 * Return: Nothing
 */
void print_number(int n)
{
	if (n == 0)
		_putchar('0');
	else if (n < 0)
	{
		_putchar('-');
		print_integer(n * -1);
	}
	else
		print_integer(n);
}
