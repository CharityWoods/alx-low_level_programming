#include "main.h"

/**
 * print_number - printing an integer
 * @n: integer to check
 */

void print_number(int n)
{
	unsigned int s;

	if (n < 0)
	{
		s = -n;
		_putchar('-');
	}
	else
	{
		s = n;
	}
	if (s / 10)
	{
		print_number(s / 10);
	}
	_putchar((s % 10) + '0');
}
