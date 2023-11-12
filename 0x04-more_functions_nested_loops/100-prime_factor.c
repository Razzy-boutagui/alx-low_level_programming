#include<stdio.h>

/**
 * main - calculat prime number
 *
 * Return: alwayse 0
 */

int main(void)
{
	long number = 612852475143;
	long p_factory;

	for (_factory = 2; p_factory * p_factory <= number; p_factory++)
	{
		while (number % p_factory == 0)
		{
			number = number / p_factory;
		}
	}
	printf("%ld\n", number);
	return (0);
}
