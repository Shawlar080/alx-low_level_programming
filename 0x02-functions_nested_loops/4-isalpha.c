#include "main.h"

/**
 * _alpha - checks for alphabetical letters
 * @c: a character to be checked on
 * Return: 0 or 1 depending on the condition
 */
int _alpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
