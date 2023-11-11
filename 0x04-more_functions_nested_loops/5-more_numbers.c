#include"main.h"

/**
 * more_numbers - print from 0 to 14
 */

void more_numbers(void)
{
	int i, ones, tens;

	for (i = 0; i <= 14; i++)
	{
		ones = _putchar(i + '0');
		tens = _putchar(i / 10 + '0');

		if (i < 10)
		{
			ones;
		}
		else
			tens;
			ones;
	}
	_putchar('\n');
}


