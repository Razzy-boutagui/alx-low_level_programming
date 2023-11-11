#include"main.h"

/**
 * _isupper - check if uppercase
 *
 * @c: variable to check
 *
 * Return: 0 if lower and 1 if upper
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
