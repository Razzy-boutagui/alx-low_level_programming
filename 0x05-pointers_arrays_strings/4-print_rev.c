#include"main.h"

/**
 * print_rev - reverse strings
 *
 * @s: the string to print
 */

void print_rev(char *s)
{
	int i, a;

	for (i = 0; s[i] != '\0'; i++)
	{
		a = i;
	}
	for (i = a; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
