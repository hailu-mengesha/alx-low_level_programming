#include "main.h"
/**
 * main - printing alphabet
 * Return: Alwayes 0 (Success)
 */
void print_alphabet(void)
{
	int n;

	for  (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
