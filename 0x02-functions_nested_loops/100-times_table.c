#include"main.h"

/**
 * print_times_table - Entry point
 *
 * @n: parameter to change
 *
 */

void print_times_table(int n)
{
	int i, j, result;

	if (n <= 15 && n >= 0)
	{

		for (i = 0; i <= n; i++)
		{
			_putchar('0');

			for (j = 1; j <= n; j++)
			{
				result = i * j;

					_putchar(',');
					_putchar(' ');

				if (result < 100 && result > 9 && j != n)
				{
					_putchar(' ');
					_putchar(result / 10 + '0');
					_putchar(result % 10 + '0');
				}
				if (result < 10 && j != n)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(result + '0');
				}
				if (result > 99 && j != n)
				{
					_putchar(result / 100 + '0');
					_putchar((result / 10) % 10 + '0');
					_putchar(result % 10 + '0');
				}
				if (result <= 9 && j == n)
				{
					_putchar(result + '0');
				}
				if (result > 9 && j == n && result < 100)
				{
					_putchar(result / 10 + '0');
					_putchar(result % 10 + '0');
				}
				if (result > 99 && j == n)
				{
				_putchar(result / 100 + '0');
				_putchar((result / 10) % 10 + '0');
				_putchar(result % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
