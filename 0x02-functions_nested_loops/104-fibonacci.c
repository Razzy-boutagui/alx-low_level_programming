#include<stdio.h>

/**
 * main - first 98 fibonacci numbers
 *
 * Return: always return 0
 */

int main(void)
{
	int a = 0, b = 1, c, i;

	for (i = 1; i <= 98; i++)
	{
		c = a + b;
		printf("%li, ", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
