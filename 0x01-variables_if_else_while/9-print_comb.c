#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always returns 0
 *
 */

int main(void)
{
int i = 0;

	while (i <= 9)
{
		putchar(i + '0');
		i++;
		if (i != 10)
{
			putchar(',');
			putchar(' ');

}
}
	putchar('\n');

	return (0);
}
