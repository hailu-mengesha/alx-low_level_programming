#include <stdio.h>

/**
 * main -Entry point
 * Return: Alwayes 0 (Success)
 */

int main(void)                                                              
{
	int i;
	char c;
	float f;
	long int l;
	long long int d;
			
	printf("Size of a int: %lu byte(s)\n", (unsigned long) sizeof(i));
        printf("Size of a char: %zu byte(s)\n", (unsigned long) sizeof(c));
	printf("Size of a float: %zu byte(s)\n", (unsigned long) sizeof(f));

        printf("Size of a long  int: %zu byte(s)\n", (unsigned long) sizeof((l));
        printf("Size of a long long int: %zu byte(s)\n", (unsigned long) sizeof((d));
	return (0);                                                                                          


