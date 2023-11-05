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
		if (c < 0)
		{
			c = -c;
		}
	printf("%li, ", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
