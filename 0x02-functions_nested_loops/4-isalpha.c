#include "main.h"

/**
 * _isalpha - Check Description
 * @c: A test character
 * Description: returns 1 if the character is alphabetic.
 * Return: 0 otherwise.
 */
int _isalpha(int c)
{
	char lower, upper;
	int isletter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				isletter = 1;
		}
	}
	return (isletter);
}
