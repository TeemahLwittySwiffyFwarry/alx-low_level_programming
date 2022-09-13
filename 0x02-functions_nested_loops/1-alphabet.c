#include "main.h"

/**
 * print alphabet -> prints the lowercase alphabets
 *
 * Descriprion: Prints the alphabet, in lowercase,followed by a new line.
 *
 * Return: 0(Success)
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');

}
