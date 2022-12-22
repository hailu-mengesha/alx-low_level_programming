#include "main.h"
/**
 *reverse_array - revereses an array.
 *@a: pointer to array.
 *@n: number of elements of an array.
 *
 *Return: void.
 */
void reverse_array(int *a, int n)
{
	int tempVal, counter;

	n = n - 1;
	counter = 0;
	while (counter <= n)
	{
		tempVal = a[counter];
		a[counter++] = a[n];
		a[n--] = tempVal;
	}
}
