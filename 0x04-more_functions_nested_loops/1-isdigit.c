#include "main.h"

/**
 * _isdigit - Checks for a digit
 * @c: Test integer
 * Return: 1 if a digit, 0 otherwise
 */
int _isdigit(int c)
{
	char i = '0';
	int isdigit = 0;

	for (; i <= '9'; i++)
	{
		if (i == c)
		{
			isdigit = 1;
			break;
		}
	}

	return (isdigit);
}
