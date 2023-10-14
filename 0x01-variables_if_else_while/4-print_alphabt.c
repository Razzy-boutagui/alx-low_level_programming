#include<stdio.h>
/**
 * main - entry point
 *
 * Return: always 0
 *
 */

int main(void)
{
	char first = 'a';
	char last = 'z';
	char q = 'q';
	char e = 'e';
while (first <= last)
{
	if (first != q && first != e)
	{
		putchar(first);
	}
	first++;
}
	putchar('\n');
	return (0);
}
