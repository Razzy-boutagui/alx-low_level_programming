#include<stdio.h>
/**
 * main - Calculat even fibo numbers
 *
 * Return: Alwayse return 0
 */

int main(void)
{
	int a, b, c, i, even;

	a = 0;
	b = 1;
	even = 0;

if (even <= 4000000)
{
	for (i = 0 ; i <= 50; i++)
	{
		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0)
		{
			even = c + even;
		}
	}
}
	printf("%i\n", even);
	return (0);
}
