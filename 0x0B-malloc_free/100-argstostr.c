#include "main.h"

/**
 * argstostr - Concatenates all args of the program.
 * @ac: args count.
 * @av: args vector.
 * Return: NULL.
 */

char *argstostr(int ac, char **av)
{
	int i, a, g = 0;
	int count = 0;
	char *outp;

	for (i = 0; i < ac; i++)
	{
		for (a = 0; av[i][a] != '\0'; a++)
			count++;
		count++;
	}
	outp = malloc(sizeof(char) * count + 1);
	if (outp == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (a = 0; av[i][a] != '\0'; a++)
		{
			outp[g] = av[i][a];
			g++;
		}
		outp[g++] = '\n';
	}
	outp[g] = '\0';
	return (outp);
}

