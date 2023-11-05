#include<stdio.h>

/**
 * main - first 98 fibonacci numbers
 *
 * Return: always return 0
 */

int main(void)
{
	long int a, b, c, i;

	a = 0;
	b = 1;

	for (i = 1; i <= 98; i++)
	{
		c = a + b;
	printf("%li", c);
		a = b;
		b = c;
	}
	return (0);
}
