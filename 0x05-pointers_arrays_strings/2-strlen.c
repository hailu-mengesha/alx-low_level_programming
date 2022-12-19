#include "main.h"
#include <stdio.h>
/**
 * _strlen - return the length of string
 * @s: the string passed
 * Return: returns the length of string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
