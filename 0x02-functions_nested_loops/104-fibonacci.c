#include<stdio.h>

/**
 * main - first 98 fibonacci numbers
 *
 * Return: always return 0
 */
int main(void)
{
	long a, b, c, total1, total2, large, small;
	int i, positive, negative;

	a = 1;
	b = 2;
	positive = negative = 1;
	printf("%ld, %ld", a, b);
	for (i = 3; i <= 98; i++)
	{
		if (positive == 1)
		{
		c = a + b;
		printf(", %ld", c);
		a = b;
		b = c;
		}
		else
		{
			if (negative)
			{
				total1 = a % 1000000000;
				total2 = b % 1000000000;
				a = a / 1000000000;
				b = b / 1000000000;
				negative = 0;
			}
				small = total1 + total2;
				large = a + b + small / 1000000000;
				printf(", %ld%ld", large, small % 1000000000);
				total1 = total2;
				total2 = small % 1000000000;
				a = b;
				b = large;
		}
		if ((a + b) < 0 && positive == 1)
			positive = 0;
	}
	printf("\n");
	return (0);
}
