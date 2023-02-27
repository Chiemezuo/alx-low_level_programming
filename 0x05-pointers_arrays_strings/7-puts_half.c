#include "main.h"

/**
 * puts_half - prints half of a string
 * if string length is odd, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: nothing
 */
void puts_half(char *str)
{

	int a, b, longint;

	longint = 0;

	for (a = 0; str[a] != '\0'; a++)
		longint++;

	b = (longint / 2);


	if ((longint % 2) == 1)
		b = ((longint + 1) / 2);


	for (a = b; str[a] != '\0'; a++)
		_putchar(str[a]);

	_putchar('\n');
}
