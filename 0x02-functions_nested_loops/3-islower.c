#include "main.h"
/**
 * int _islower - checking lower case letter's.
 * Return: 1 if c is lowercase otherwise o
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

