#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints string in reverse order
 * @s: string parameter
 * Return: String in reverse order
 */
void print_rev(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
