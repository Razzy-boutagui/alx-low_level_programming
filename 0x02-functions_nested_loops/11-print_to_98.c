#include"main.h"

/**
 * print_to_98 - Entry point
 *
 *@n: parameter to change
 *
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n == -10)
			{
				_putchar('-');
				_putchar((n * -1) / 10 + '0');
				_putchar((n * -1) % 10 + '0');

			}
			if (n > -10 && n < 0)
			{
				_putchar('-');
				_putchar((n * -1)+ '0');
			}
			if (n < 10 && n > -1 )
			{
				_putchar(n + '0');
			}
			else if (n >= 10)
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
			if (n < 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
		_putchar('\n');
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			if (n > 99)
			{
			_putchar(n / 100 + '0');
			_putchar((n % 100) / 10 + '0');
			_putchar(n % 10 + '0');
			}
			if (n <= 99)
			{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			}
			if (n > 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
		_putchar('\n');
	}
}
