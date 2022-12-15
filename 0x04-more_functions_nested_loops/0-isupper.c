#include "main.h"
/**
 * int _isupper - function for checking upper case letter
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	if ((c >= "A") && (c <= "Z"))
		return (1);
	else
		return (0);
}
