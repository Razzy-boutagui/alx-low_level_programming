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
		while (first <= last && min < 10)
		{
			_putchar(first);
			first++;
		}
		min++;
		_putchar('\n');
	}
}
