#include"main.h"
#include<stdio.h>
/**
 * print_array - print array n times
 *
 * @n: then number of arrays to print
 *
 * @a: the array to print
 */

void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
	printf("%d", a[0]);
	for (i = 1; i < n; i++)
	{
		printf(", %d", a[i]);
	}
	}
	else
	{}
	printf("\n");
}
