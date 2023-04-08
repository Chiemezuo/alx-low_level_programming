#include "main.h"

/**
 * set_bit - Sets value of a bit at a given index to 1.
 * @num: Pointer to the bit.
 * @index: The index to set the value at.
 * Return: If error -1, else 1
 */
int set_bit(unsigned long int *num, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*num ^= (1 << index);

	return (1);
}
