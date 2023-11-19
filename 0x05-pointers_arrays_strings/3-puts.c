#include"main.h"

/**
 * _puts - Print string characters
 *
 * @str: the charachter we want to print
 *
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
