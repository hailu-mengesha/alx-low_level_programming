#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 1ox
 * Return: Alwayes 0 (Success)
 */

void print_alphabet_x10(void)
{
	int n, x;

	x = 0;
	while
		(x < 10)
		{
			for (n = 'a'; n <= 'z'; n++)
			{
				putchar(n);
			}
			x++;
			putchar('\n');
		}
}
