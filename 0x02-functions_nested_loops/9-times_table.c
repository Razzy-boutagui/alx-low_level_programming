#include"main.h"

/**
 * times_table - Entry point
 */

void times_table(void)
{
	int i, j, ones, tens;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i * j <= 9)
			{
				ones = i * j;
				_putchar(ones + '0');
			}
			else
			{
				tens = i * j;
				_putchar(tens / 10 + '0');
				_putchar(tens % 10 + '0');
			}
			if (j * i <= 9 && j < 9)
			{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			}
			else if (i * j > 9 && j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else if (j == 9)
			{
			}
		}
		_putchar('\n');
	}
}
