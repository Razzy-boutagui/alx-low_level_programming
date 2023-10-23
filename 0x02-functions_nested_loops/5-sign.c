#include"main.h"

/**
 * print_sign - Entry point
 *
 * @n: number to check
 *
 * Return: 1 if n > than 0 and return 0 if = to 0 and return -1 if < than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0' + 0);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
