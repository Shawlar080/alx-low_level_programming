#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers,
 * from 0 to 9 and Do not print 2 and 4
 * Return: Always 0 if successful
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && I != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
