#include "main.h"i
/**
*print_rev - prints string in reverse and very so_cool
*@s: string
*
*return: always 0
*/
void print_rev(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	x--;
	while (x >= 0)
	{
		putchar(s[x]);
		x--;
	}
	putchar('\n');
}
