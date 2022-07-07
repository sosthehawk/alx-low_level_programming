#include "main.h"

/**
 * _islower -check for lowercase char
 * Return: return 1 if lowercase and 0 else otherwise
 * @c: the char to print
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
