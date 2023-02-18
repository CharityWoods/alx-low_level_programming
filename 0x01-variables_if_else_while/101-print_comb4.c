#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 *        in ascending order, separated by commas and spaces
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int digit1, digit2, digit3;

	for (digit1 = 0; digit1 < 8; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 9; digit2++)
		{
			for (digit3 = digit2 + 1; digit3 < 10; digit3++)
			{
				putchar(digit1 + '0');
				putchar(digit2 + '0');
				putchar(digit3 + '0');
				if (digit1 == 7 && digit2 == 8 && digit3 == 9)
				{
					putchar(',');
				}
				else
					putchar('\n');
			}
		}
	}
	return (0);
}
