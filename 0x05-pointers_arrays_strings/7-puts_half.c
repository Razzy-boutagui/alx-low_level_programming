#include"main.h"
#include"2-strlen.c"

/**
 * puts_half - print the seconde half
 *
 * @str: the string to split
 */

void puts_half(char *str)
{
	int i;
	int x = _strlen(str);

	if (x % 2 == 0)
	{
	for (i = x / 2; i < x; i++)
	{

		_putchar(str[i]);
	}
	}
	else
	{
		for (i = (x + 1) / 2; i < x; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
