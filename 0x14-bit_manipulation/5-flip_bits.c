#include "main.h"

/**
 * flip_bits - Gets number of bits needed to flip
 * @num: number of bit flips needed to equal num2 for num
 * @num2: The number to set other equal
 * Return: The number of fliped bits
 */

unsigned int flip_bits(unsigned long int num, unsigned long int num2)
{
	unsigned int flips = 0;
	unsigned long int xor = (num ^ num2);
	unsigned long int max = 0x01;

	while (max <= xor)
	{
		if (max & xor)
			flips++;
		max <<= 1;
	}
	return (flips);
}
