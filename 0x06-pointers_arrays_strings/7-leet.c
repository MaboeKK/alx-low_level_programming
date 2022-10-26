#include "main.h"

/**
 * leet - encodes a string to 1337*
 * @n: input variable
 * Return: n
 */
char *leet(char *n)
{
	int i, q;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (q = 0; q < 10; q++)
		{
			if (n[i] == s1[q])
			{
				n[i] = s2[q];
			}
		}
	}
	return (n);
}
