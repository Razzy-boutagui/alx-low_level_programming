#include"main.h"
#include"2-strlen.c"
/**
 * _strcpy(char *dest, char *src) - copy function
 *
 * @dest: where to past the copy
 *
 * @src: the string to copy
 *
 * Return: the value of dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int t = _strlen(src);
	char cp;

	for (i = 0; i <= t; i++)
	{
		cp = src[i];
		dest[i] = cp;
	}
	return (dest);
}
