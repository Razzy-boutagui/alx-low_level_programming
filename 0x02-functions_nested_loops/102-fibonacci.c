#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: alwayse return 0
 *
 */


int main(void)
{
	int last = 1;
	int current = 2;
	int new = last + current;
	int x;

	printf("%d, ", last);
	printf("%d, ", current);
	for (x = 1; x <= 50; x++)
	{
		new = last + current;
		printf("%d, ", new);
		last = current;
		current = new;
	}
	printf("\n");

	return (0);
}
