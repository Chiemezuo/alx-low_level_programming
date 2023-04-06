#include "main.h"

/**
 * binary_to_uint - Function that converts binary unsigned integer
 * @c: Pointer to binary string
 * Return: converted number
 */
unsigned int binary_to_uint(const char *c)
{
	unsigned int base = 1, result = 0, len = 0;

	if (c == NULL)
		return (0);

	while (c[len])
		len++;

	while (len)
	{
		if (c[len - 1] != '0' && c[len - 1] != '1')
			return (0);

		if (c[len - 1] == '1')
			result += base;
		base *= 2;
		len--;
	}
	return (result);
}
