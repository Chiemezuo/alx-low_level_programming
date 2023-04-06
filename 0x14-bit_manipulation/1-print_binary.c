#include "main.h"

/**
 * print_binary - Prints a binary number without % or /
 * @num: Number to be printed
 * Return: Nothing
 */
void print_binary(unsigned long int num)
{
	unsigned int flag = 0, max = 32768; /* 1000 0000 0000 0000 */

	if (num == 0)
	{
		_putchar('0');
		return;
	}
	while (max)
	{
		if (flag == 1 && (num & max) == 0)
			_putchar('0');
		else if ((num & max) != 0)
		{
			_putchar('1');
			flag = 1;
		}
		max >>= 1;
	}
}
