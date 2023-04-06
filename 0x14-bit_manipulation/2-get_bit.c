#include "main.h"

/**
 * get_bit - Gets a bit at index
 * @num: Number to get bit from
 * @index: The index
 * Return: The value of the bit or -1 if error happens
 */
int get_bit(unsigned long int num, unsigned int index)
{
	unsigned long int max = 0x01;

	max <<= index;
	if (max == 0)
		return (-1);

	if ((num & max))
		return (1);
	else
		return (0);
}
