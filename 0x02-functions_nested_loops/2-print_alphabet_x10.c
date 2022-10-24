#include "main.h"
/**
 * print_alphabet_x10 - repeats the alphabet 10 times
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char y;
	int i;

	for (y = 0; y <= 9; y++)
	{
		for (i = 'a' ; i <= 'z'; i++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
}

