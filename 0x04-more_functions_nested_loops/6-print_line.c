#include "main.h"
/**
 * print_line - draw a line on the terminal
 * @n: number input
 */
void print_line(int n)
{
	int i = 0;

	while (i < n && n > 0)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}

