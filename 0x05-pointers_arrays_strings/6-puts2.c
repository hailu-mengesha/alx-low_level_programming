#include "main.h"

/**
* puts2 - prints every other character of a string
* starts with first character with a new line
* @str: parameter
* Return: Alwayes 0
*/
void puts2(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < j; i++)
	{
		if (i % 2 != 0)
			continue;
		_putchar(str[i]);
	}
	_putchar('\n');
}
