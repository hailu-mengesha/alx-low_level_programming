#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string
 * @str: string parameter
 * Return: return the length of the string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar(*str);
}