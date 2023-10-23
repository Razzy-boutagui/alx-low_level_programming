#include"main.h"


/**
 * _isalpha - Entry point
 *
 * @c: the character we are going to check
 *
 * Return: 1 if @c is alpha and return 0 otherwise
 */

int _isalpha(int c)
{

	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
	{
		return (1);
	}
	else
		return (0);
}
