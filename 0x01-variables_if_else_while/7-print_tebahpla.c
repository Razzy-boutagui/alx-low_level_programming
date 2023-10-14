#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always returns 0
 *
 */

int main(void)
{
char first = 'z';
char last = 'a';
while   (first >= last)

{
putchar(first);
first--;
}
putchar('\n');
return (0);
}
