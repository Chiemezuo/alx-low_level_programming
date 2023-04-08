#include "main.h"

/**
 * clear_bit - Sets a bit to 0 at given index
 * @num: The number to set bit in
 * @index: The index to set bit at
 * Return: 1 if successful, else -1
 */
int clear_bit(unsigned long int *num, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*num &= ~(1 << index);

	return (1);
}
