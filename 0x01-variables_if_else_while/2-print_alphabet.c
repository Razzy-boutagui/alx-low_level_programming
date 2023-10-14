#include <stdio.h>

char first = 'a';
char last = 'z';
int main () {
while (first<=last)
{
putchar(first);
putchar('\n');
first++;
}
   return 0;
}
