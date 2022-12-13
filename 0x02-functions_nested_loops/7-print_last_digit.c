#include "main.h"
/**
 * print_last_digit - print the last digit
 * @l: last digit
 * Return: the last digit
 */
int print_last_digit(int l)
{
	int n;

	n = (l % 10);
	if (n < 0)
	{
		n = (-1 * n);
	}
	_putchar(n + '0');
	return (n);
}

