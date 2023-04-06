#include "main.h"

/**
 * get_endianness - Checks endianness
 * Return: 0 if big endian, 1 if small endian
 */
int get_endianness(void)
{
	unsigned int integ = 1;
	char *c = (char *)&integ;

	if (*c)
		return (1);
	return (0);
}
