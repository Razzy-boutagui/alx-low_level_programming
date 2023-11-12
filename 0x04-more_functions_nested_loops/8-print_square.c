#include"main.h"

/**
 * print_square - printa square
 *
 * @size: large and lenght of the square
 *
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
}
