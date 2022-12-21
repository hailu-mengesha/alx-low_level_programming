#include "main.h"
#include <string.h>
/**
 * * _strncat - concatenates two strings
 * it will use at most n bytes from src
 * src does not need to be null-terminated
 * if it contains n or more bytes
 * @dest: pointer for destination string
 * @src: pointer for source string
 * @n: number of bytes to be concatenated
 * Return: pointer for destination dtring
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, j;

	/* len length of destination string */
	/* j counter for n bytes of src to be concatenated */

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++, len++)
	{
		dest[len] = src[j];
	}
	dest[len] = '\0';
	return (dest);
}
