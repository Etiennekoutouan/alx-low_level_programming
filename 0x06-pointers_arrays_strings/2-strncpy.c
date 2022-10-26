#include "main.h"
/**
*_strncpy - function that copies a string
*
*@src: The source of strings
*@dest: The destination of the string
*@n: The length of int
*
*Return: pointer to the resulting string dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int e;

	for (e = 0; e < n && *(src + e); e++)
	{
		*(dest + e) = *(src + e);
	}
	for (; e < n; e++)
	{
	*(dest + e) = '\0';
	}
	return (dest);

}
