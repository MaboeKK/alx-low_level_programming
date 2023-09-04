#include "main.h"
#include "stdlib.h"
#include "stdio.h"

/**
 * _strdup - function that returns pointer to new allocated space in memeory.
 * @str : The string.
 * Return: Pointer to duplicated string, NULL if insufficient memory.
 */
char *_strdup(char *str)
{
	char *s;
	int a, b = 0;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)
		b++;

	s = malloc(sizeof(char) * a + 1);

	if (s == NULL)
		return (NULL);
	for (a = 0; str[a] != '\0'; a++)
		s[a] = str[a];

	return (s);
}
