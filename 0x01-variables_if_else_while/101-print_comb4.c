#include <stdio.h>

/**
 * main - Entry point
 *
 * codes for printing all possible combinations of two differents digits
 * in ascending order, by a comma, folowed by a space.
 *
 * Return: 0 Success
 */

int main(void)
{
	int digit1, digit2, digit3;

	for (digit1 = 0; digit1 < 9; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 10; digit2++)
		{
			for digit3 = digit3 + 1; digit 3 < 10; digit3++)
			{
				putchar((digit1 % 10) + '0');
				putchar((digit2 % 10) + '0');
				putchar((digit3 % 10) + '0');

				if (digit1 == 7 && digit2 == 8 digit3 ==9)
					