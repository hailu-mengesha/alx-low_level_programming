#include <stdio.h>
/**
 * main - Entry point
 * Return: Alwayes 0 (Success)
 */
void print_alphabet_x10(void);
int main(void)
{
	print_alphabet_x10();
	return (0);
}
void print_alphabet(void)
{
	int n, x;

	x = 0;
	while
		(x <10)
		{
			for (n = 'a'; n <= 'z'; n++)
			{
				putchar(n);
			}
			x++;
			putchar('\n');
		}
}