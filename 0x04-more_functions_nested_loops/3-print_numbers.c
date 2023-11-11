#include"main.h"

/**
 * print_numbers - print numbers
 *
 * Return: alwayse 0
 *
 */

void print_numbers(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
