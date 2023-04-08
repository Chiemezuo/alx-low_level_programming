#include "main.h"

/**
 * get_bit - Gets the value of a bit at given index.
 * @num: The bit.
 * @index: The index to get the value at.
 * Return: -1 if error, or valude of num at index.
 */
int get_bit(unsigned long int num, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((num & (1 << index)) == 0)
		return (0);

	return (1);
}
