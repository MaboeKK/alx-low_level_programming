#include "main.h"

/**
 * _strcat - joins two strings together
 * @dest: destination
 * @src: string source
 * Return: *dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int q;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	q = 0;
	while (src[q] != '\0')
	{
		dest[i] = src[q];
		i++;
		q++;
	}
	dest[i] = '\0';
	return (dest);
}
