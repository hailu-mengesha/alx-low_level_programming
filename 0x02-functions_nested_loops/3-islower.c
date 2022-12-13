#include "main.h"
/**
 * _islower - checking lower case letter's.
 * @c: single letter input
 * Return: 1 if c is lowercase otherwise o
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

