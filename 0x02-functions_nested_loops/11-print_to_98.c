#include"main.h"
#include<stdio.h>

/**
 * print_to_98 - Entry point
 *
 * @n: parameter to change
 *
 */

void print_to_98(int n)
{
	int i = n;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
		printf("%i, ", i);
		}
	}
	else if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
		printf("%i, ", i);
		}
	}
	if (i == 98)
	{
		printf("%i\n", i);
	}
}
