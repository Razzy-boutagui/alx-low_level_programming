#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: Always 0
 *
 */


void print_alphabet(void)
{
	char first = 'a', last = 'z';

	while (first <= last)
	{
		_putchar(first);
		first++;
	}
	_putchar('\n');
}
