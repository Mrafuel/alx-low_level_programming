#include "main.h"

/**
 * _islower - Used to Check if a character c is lowercase.
 * @c: The character to be checked.
 * Return: 1 if the character c is lowercase, otherwis 0.
 */
	int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
