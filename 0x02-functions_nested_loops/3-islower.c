#include "main.h"

/**
 * _islower - Used to Check if a character is lowercase.
 *
 * Return: 1 if the character is lowercase, otherwis 0.
 */
	int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
