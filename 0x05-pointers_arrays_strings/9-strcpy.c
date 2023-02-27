#include "main.h"

/**
 * char *_strcpy - copies the string pointed to by src
 * @dest: copy destination
 * @src: source of copy
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}

	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}

	dest[l] = '\0';

	return (dest);

}
