#include <stdio.h>

/**
 * main - Entry point
 * Return: always return 0
 */



int main(void)
{
	int a = 3;
	int b = 5;
	int x, number = 0;

	for (x = 0; x < 1024; x++)
	{
		if (x % a == 0 || x % b == 0)
		{
			number = number + x;
		}
	}
	printf("%d\n", number);
	return (0);
}
