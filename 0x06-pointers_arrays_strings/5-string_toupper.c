#include "main.h"

/**
 * string_toupper - capitalise all letters in string
 * @s: string to be capitalised
 * Return: string with all letters capitalized
 */

char *string_toupper(char *s)
{

	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 'a' + 'A';
	}
	return (s);
}
