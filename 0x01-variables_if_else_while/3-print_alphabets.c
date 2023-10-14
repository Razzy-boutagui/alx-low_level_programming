#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always return 0
 *
 */

int main(void)
{
char firstL = 'a';
char lastL = 'z';
char firstU = 'A';
char lastU = 'Z';
while (firstL <= lastL)
{
	putchar(firstL);
	firstL++;
}
while (firstU <= lastU)
{
	putchar(firstU);
	firstU++;
}
putchar('\n');
	return (0);
}
