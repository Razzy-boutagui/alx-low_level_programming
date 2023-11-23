#include"main.h"

/**
 * rev_string - reverse strings
 *
 * @s: the string to reverse
 */

void rev_string(char *s)
{
	int i;
	char *a;
	int b;

	a = s;
	a = a + (_strlen(s) - 1);

	for (i = _strlen(s) - 1; i >= 0; i--)
	{
	b = *a - 1;
	*s = *a + 1;
	*a = b;
	}

}
