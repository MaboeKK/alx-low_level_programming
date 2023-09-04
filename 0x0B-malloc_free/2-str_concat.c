#include "main.h"

/**
 * str_concat - function to concatenate two strings.
 * @s1 : First string.
 * @s2 : Second string.
 * Return: NULL.
 */

char *str_concat(char *s1, char *s2)
{
	int s1l = 0, s2l = 0, i;
	char *out;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1l++;
	for (i = 0; s2[i] != '\0'; i++)
		s2l++;

	out = malloc(sizeof(char) * (s1l + s2l) + 1);

	if (out == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		out[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		out[s1l + i] = s2[i];
	return (out);
}
