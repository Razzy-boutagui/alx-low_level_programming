#include"main.h"

/**
 * rev_string - reverse strings
 *
 * @s: the string to reverse
 */

void rev_string(char *s)
{
	int i;
	int lenght = _strlen(s);
	char temp;
	char *start = s;
	char *end = s + lenght - 1;

	for (i = 0; lenght / 2; i++)
	{
		temp = *end;
		*end = *start;
		*start = temp;
		end--;
		start++;
	}
}

