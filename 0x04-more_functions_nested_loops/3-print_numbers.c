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
	int c = 0;

	for (i = 1; i <= 10; i++)
	{
		_putchar(c + '0');
	}
	_putchar(\n);
}
