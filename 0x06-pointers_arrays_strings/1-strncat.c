#include "main.h"

/**
 * _strncat - joins two strings together
 * @dest: destination
 * @src: string source
 * @n: number of string characters to be copied to string destination
 * Return: *dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int q;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	q = 0;
	while (q < n && src[q] != '\0')
	{
		dest[i] = src[q];
		i++;
		q++;
	}
	dest[i] = '\0';
	return (dest);
}
