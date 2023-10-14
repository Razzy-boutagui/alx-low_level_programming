#include <stdio.h>

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
