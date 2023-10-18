#include <stdio.h>

/**
 * main - Entry poin
 *
 * Return: always return 0
 *
 */

int main(void)
{
	char first = '0';
	char last = '9';
	char First = 'a';
	char Last = 'f';

	while (first <= last)
{
	putchar(first);
	first++;
}

	while (First <= Last)
{
	putchar(First);
	First++;
}

	putchar('\n');

return (0);
}
