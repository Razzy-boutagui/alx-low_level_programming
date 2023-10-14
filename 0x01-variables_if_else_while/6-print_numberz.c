#include<stdio.h>
/**
 * main - entry point
 *
 * Return: always 0
 *
 */

int main(void)
{
	int N = 0;

	while (N < 10)
	{
	putchar(N + '0');

	N++;
	}
	putchar('\n');
	return (0);
}
