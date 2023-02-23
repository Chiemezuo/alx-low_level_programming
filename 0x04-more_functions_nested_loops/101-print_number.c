#include "main.h"
void print_integer(int m);

/**
 * print_number - Prints an integer.
 * @n: The integer
 * Return: Nothing
 */
void print_number(int n)
{
	// If number is smaller than 0, put a - sign
	// and change number to positive
	if (n < 0) {
        	_putchar('-');
        	n = -n;
	}

	// Remove the last digit and recur
	if (n/10)
		print(n/10);

	// Print the last digit
	_putchar(n%10 + '0');
}
