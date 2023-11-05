#include<stdio.h>

/**
 * main - first 98 fibonacci numbers
 *
 * Return: always return 0
 */

int main(void)
{
	unsigned long a = 0, b = 1, c;
	int i;

	for (i = 1; i <= 98; i++)
	{
		c = a + b;
		if (i < 98)
		{
			printf("%lu, ", c);
		}
		if (i == 98)
		{
			printf("%lu", c);
		}
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
