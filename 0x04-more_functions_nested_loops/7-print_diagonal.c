#include "main.h"
/**
 * print_diagonal - printing diagonal on the terminal
 * @n: number input
 * Return: Alwayes 0
 */
void print_diagonal(int n)
{
	int i = 0;

	while (i < n && n > 0)
	{
		_putchar('\\');
		i++;
	}
	_putchar('\n');
}
