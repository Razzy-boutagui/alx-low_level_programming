#include"main.h"
#include<stdio.h>
/**
 * main - print fixx if mul of 3 and buzz if mul of 5
 *
 * Return: alwayse return 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("fizzbuzz");
		}
		else if (i % 5 == 0)
		{
			printf("buzz");
		}
		else if (i % 3 == 0)
		{
			printf("fizz");
		}
		else
		{
			printf("%d", i);
		}
		printf(" ");
	}
	printf("\n");
	return (0);
}
