#include "main.h"

/**
 * swap_int - swaps value of two integers
 * @a: integer to swap
 * @b: integer to swap
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
