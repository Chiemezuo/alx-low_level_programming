#include "main.h"

/**
 * set_bit - Sets a bit at given index to 1
 * @num: Number to set bit in
 * @index: The index to set bit at
 * Return: 1 if success, else -1
 */
int set_bit(unsigned long int *num, unsigned int index)
{
	unsigned long int max = 0x01;

	max <<= index;
	if (max == 0)
		return (-1);
	*num |= max;
	return (1);
}
