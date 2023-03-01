#include "main.h"

/**
 * _strcmp - compare string values
 * @s1: string 1
 * @s2: string 2
 * Return: integer comparison or 0
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	i = 0;
	
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}

	return (0);
}
