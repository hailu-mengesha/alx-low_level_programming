#include "main.h"
/**
 *string_toupper - changes all lowercase letters of a string to uppercase.
 *@S: pointer to string.
 *
 *Return: pointer to uppercase string.
 */
char *string_toupper(char *S)
{
	int len;

	len = 0;

	while (S[len] != '\0')
	{
		if (S[len] >= 97 && S[len] <= 122)
		{
			S[len] = S[len] - 32;
		}
		len++;
	}
	return (S);
}
