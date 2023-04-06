#include "main.h"

/**
 * clear_bit - Sets a bit to 0 at given index
 * @num: The number to set bit in
 * @index: The index to set bit at
 * Return: 1 if successful, else -1
 */
int clear_bit(unsigned long int *num, unsigned int index)
{
	unsigned long int max = 0x01;

	max = ~(max << index);
	if (max == 0x00)
		return (-1);
	*num &= max;
	return (1);
}
