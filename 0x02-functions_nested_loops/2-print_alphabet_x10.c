#include "main.h"

/**
 * print_alphabet_x10 - prints 10x the alphabet in lowercase.
 */
void print_alphabet_x10(void)
	{
	int count = 0;
	char loweCase;

	while (count++ <= 9)
	{
		for (loweCase = 'a'; loweCase<= 'z'; loweCase++)
			_putchar(loweCase);
		_putchar('\n');
	}
	}
