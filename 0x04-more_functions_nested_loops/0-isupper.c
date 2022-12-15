#include "main.h"
/**
 *_isupper - function for checking upper case letter
 *@c: integer input
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
