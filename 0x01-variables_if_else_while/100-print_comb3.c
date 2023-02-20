#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - all possible different combinatons of two digit
 * Description: print all numbers from 01-09, and from
 * 12 to 89 separated with whitespaces and commas.
 *
 * Return: 0 (Success)
 */
int main(void)
{
int i;
int j;

i = 48;
j = 49;
while  ((i < 57) && (j < 58))
{
	putchar(i);
	putchar(j);
	if ((i == 56) && (j == 57))
	{
		putchar('\n');
		i++;
		j++;
	}
	else
	{
		putchar(44);
		putchar(32);
		if (j < 57)
		{
			j++;
		}
		else
		{
			i++;
			j = 1 + i;
		}
	}
}
return (0);
}	
