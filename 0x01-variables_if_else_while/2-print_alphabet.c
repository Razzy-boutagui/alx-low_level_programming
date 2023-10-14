#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always returns 0
 *
 */

char first = 'a';
char last = 'z';
int main () {
while (first<=last)
{
putchar(first);
first++;
}
putchar('\n');
   return 0;
}
