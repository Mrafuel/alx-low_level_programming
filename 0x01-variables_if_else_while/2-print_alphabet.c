#include <stdio.h>

/**
 * main - This is the Entry point
 *
 * Return: Always 0.
 */

int main(void)
{
	char lowCase;

	for (lowCase = 'a'; lowCase <= 'z'; lowCase++)
	{
		putchar(lowCase);
	}	
	putchar('\n');
	return (0);
}
