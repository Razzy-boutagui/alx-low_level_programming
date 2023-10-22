#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: void
 */


void print_alphabet_x10(void)
{
	char first = 'a', last = 'z';
	int min = 0;

	while (min < 10)
	{
		for (first = 'a',first < last, first++)
		{
			_putchar(first);

		}
		min++;
		_putchar('\n');
	}
}
