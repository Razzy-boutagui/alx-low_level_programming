#include"main.h"

/**
 * print_triangle - the name tell everything
 *
 * @size: the size of triangle
 */

void print_triangle(int size)
{
	int i, j, x;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (i = 0; i < size; i++)
	{
		j = i + 1;
		while (j < size)
		{
			_putchar(' ');
			j++;
		}
		for (x = 0; x <= i; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	}
}
