#include "main.h"

/**
* puts_half - print half half of a string
* @str: string to be printed
*
* Return: void
*/
void puts_half(char *str)
{
	int i, mid;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	if (j % 2 == 0)
	{
		for (i = j / 2; i < j; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		mid = (j - 1) / 2;
		for (i = mid + 1; i < j; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
