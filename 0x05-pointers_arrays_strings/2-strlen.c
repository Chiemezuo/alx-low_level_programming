#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
