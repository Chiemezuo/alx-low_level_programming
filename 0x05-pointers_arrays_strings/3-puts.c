#include "main.h"

/**
 * _puts - print a string and then a new line to stdout
 * @str: string to print
 * Return: nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
