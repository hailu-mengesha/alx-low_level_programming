#include <stdio.h>
/**
 * main - sum of multiple of 3 and 5
 * @i: natural number input
 * @sum: sum result
 * Return: Alwayes 0 (Successs)
 */
int main(int i int sum)
{
	int sum = 0;

	clrscr();
	for (i = 0; i < 1024; i++)
	{
		if ((i % 5 == 0) || (i % 3 == 0))
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	getchar();
	return  (0);
}
