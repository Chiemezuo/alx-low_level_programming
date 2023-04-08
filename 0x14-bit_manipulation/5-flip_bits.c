#include "main.h"

/**
 * flip_bits - Gets number of bits needed to flip
 * @num: number of bit flips needed to equal num2 for num
 * @num2: The number to set other equal
 * Return: The number of fliped bits
 */

unsigned int flip_bits(unsigned long int num, unsigned long int num2)
{
	unsigned long int xor = num ^ num2, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
