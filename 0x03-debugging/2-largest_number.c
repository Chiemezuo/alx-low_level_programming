#include "main.h"

/**
 * largest_number - returns largest of 3 numbers
 * @a: 1st number
 * @b: 2nd number
 * @c: 3rd number
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else if (c >= a && c >= b)
	{
		largest = c;
	}

	return (largest);
}
