#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 otherwise NULL
 */
unsigned int binary_to_uint(const char *b)
{

	unsigned int;

	if (b == NULL)
	{
		return (0);
	}

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}

		if (*b == '1')
		{
			return += 1;
		}
		b++;
	}
	return (0);
}
