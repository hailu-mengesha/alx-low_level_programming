#include <stdio.h>
/**
 * main - finding prime factors of a number
 * Return: Alwayes 0
 */

int main(void)
{
	long num = 612852475143;
	long divisor = 2;
	long larg_prime_factor = 0;

	while (num != 1)
	{
		if (num % divisor == 0)
		{
			num = num / divisor;
			larg_prime_factor = divisor;
		}
		divisor += 1;
	}
	printf("%ld\n", larg_prime_factor);
	return (0);
}
