#include "main.h"

/**
 * print_sign - Check Description
 * @n: A test number
 * Description: Prints the sign of the number
 * Return: 1 if positive, 0 if zero or -1 if number negative
 */
int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else
	{
		value = -1;
		_putchar('-');
	}

	return (value);
}
