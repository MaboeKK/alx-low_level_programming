#include "main.h"

/**
 * _strncpy - joins two strings together
 * @dest: destination
 * @src: string source
 * @n: number of string characters to be copied to string destination
 * Return: *dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int q;

	q = 0;
	while (q < n && src[q] != '\0')
	{
		dest[q] = src[q];
		q++;
	}
	while (q < n)
	{
		dest[q] = '\0';
		q++;
	}
	return (dest);
}
