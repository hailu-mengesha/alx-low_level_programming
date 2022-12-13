#include "main.h"
/**
 * jack_bauer - function printing every minutes of a day in 24 hr
 * h = hour , m = minutes
 * Return: 24 clock
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar((h / 10) + '0'));
			_putchar((h % 10) + '0'));
			_putchar(':');
			_putchar((m / 10) + '0'));
			_putchar((m % 10) + '0'));
			_putchar('\n');
		}
	}
}
