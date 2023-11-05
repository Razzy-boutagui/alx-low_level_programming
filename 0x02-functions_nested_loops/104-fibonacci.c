#include<stdio.h>

/**
 * main - first 98 fibonacci numbers
 *
 * Return: always return 0
 */

int main(void)
{
	double a = 0, b = 1, c;
	int i;

	for (i = 1; i <= 98; i++)
	{
		c = a + b;
		if (c < 98)
		{
			printf("%.0f, ", c);
		}
		if (i == 98)
		{
			printf("%.0f", c);
		}
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
