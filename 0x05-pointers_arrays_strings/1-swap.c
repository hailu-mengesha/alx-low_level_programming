#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaping two integer
 * @a: first parameter
 * @b: second parameter
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int x, y;

	x = *a;
	y = *b;

	*a = y;
	*b = x;
}
