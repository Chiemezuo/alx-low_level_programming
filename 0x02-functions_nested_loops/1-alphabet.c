#include "main.h"

/**
 * print_alphabet - See Description
 * Description: Prints alphabets in lowercase and then  new line
 * Return: Nothing.
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
