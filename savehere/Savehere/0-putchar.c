#include "main.h"

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char l[] = {"_putchar"};
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(l[i]);
	}
	_putchar('\n');

	return (0);
}
