#include "main.h"
/**
 * _abs - compute the absolute value
 * @x: integer input
 * Return: the absolute value of x
 */
int _abs(int x)
{
	return (x * ((x > 0) - (x < 0)));
}

