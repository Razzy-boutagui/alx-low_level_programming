#include"main.h"

/**
 * print_line - print line n times
 *
 * @n: number of _ we are printing
 *
 */

void print_line(int n)
{
	int i = 1;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
