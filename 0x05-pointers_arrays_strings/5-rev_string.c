#include "main.h"
#include <stdio.h>
/**
 * rev_string - function that reverses a string
 * @s: input parameters
 * Return: the string that is reversed
 */
void rev_string(char *s)
{
	int i, j, k, curVal;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	j = i - 1;
	k = 0;

	while (k < j)
	{
		curVal = s[k];
		s[k] = s[j];
		s[j] = curVal;
		k++;
		j--;
	}
}
