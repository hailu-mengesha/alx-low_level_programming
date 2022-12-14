#include <stdio.h>
/**
*main - prints the addition of all numbers which are multiples of 3 and 5
*below 1024
*Return: 0
*/
int main(void)
{
	int n, sum;

	while (n < 1024)
	{
	if ((n % 3) == 0)
	{
	sum = n + sum;
	}
	else if ((n % 5) == 0)
	{
	sum = n + sum;
	}
	n++;
	}
	printf("%d\n", sum);
	return (0);
}












