#include "main.h"
#include <stdlib.h>
/**
*_strdup - returns a pointer to a newly allocated space in memory,
*which contains a copy of the string given as a parameter.
*@str: the source string
*
*Return: returns a pointer to the duplicated string.
*It returns NULL if insufficient memory was available
*/
char *_strdup(char *str)
{
char *strout;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	strout = (char *)malloc(sizeof(char) * (i + 1));

	if (strout == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		strout[j] = str[j];

	return (strout);
}
