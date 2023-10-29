#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * @n: parameter
 *
 * Return: last_digit
 *
 */

int print_last_digit(int n)
{
	 int last_digit;

	if (n < 0)
	{
		n = -n;

	last_digit = n % 10;
	_putchar('0' + last_digit);
	}
	else
	{
		last_digit = n % 10;
		_putchar('0' + last_digit);
	}
		return (last_digit);
}

