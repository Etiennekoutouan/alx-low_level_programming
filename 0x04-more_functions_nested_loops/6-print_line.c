#include "main.h"
/**
*print_line - prints a straight line using '_'
*@n: the number of '_' to be printed
*/
void print_line(int n)
{
	int spc;

	if (n > 0)
	{
		for (spc = 0; spc < n; spc++)
			_putchar('_');
	}

	_putchar('\n');
}
