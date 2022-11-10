#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string input
 * @s2: second string input
 * @n: an input integer of number of strings to concatenate
 * Return: a pointer to the concatened string, or NULL if string is NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int i = 0, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;

	if (s2 == NULL)
		s2 = "";
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	if (n > len2)
		n = len2;

	new_str = malloc(len1 + n + 1);

	if (new_str == NULL)
		return (NULL);
	for (; i < (len1 + n); i++)
	{
		if (i < len1)
			new_str[i] = s1[i];
		else
			new_str[i] = s2[i - len1];
	}
	new_str[i] = '\0';
	return (new_str);
}
