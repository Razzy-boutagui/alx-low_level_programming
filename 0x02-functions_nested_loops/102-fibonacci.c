#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: alwayse return 0
 *
 */

int main(void)
{
	long int last = 1;
	long int current = 2;
	long int new = last + current;
	long int x;

	printf("%ld, ", last);
	printf("%ld, ", current);
	for (x = 1; x <= 50; x++)
	{
		new = last + current;
		printf("%ld, ", new);
		last = current;
		current = new;
	}
	printf("\n");

	return (0);
}
