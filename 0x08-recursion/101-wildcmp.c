#include <string.h>

int cmp(char *s1, char *s2, int i, int j);

/**
 * wildcmp - compares two strings to check if they are identical
 * @s1: first string
 * @s2: second string
 * Return: 1 if idential, else 0
 */

int wildcmp(char *s1, char *s2)
{
	return (cmp(s1, s2, 0, 0));
}

/**
 * cmp - compares two strings
 * @s1: first string
 * @s2: second string
 * @i: recursion looper (s1 index)
 * @j: recursion looper (s2 index)
 * Return: 1 or 0
 */

int cmp(char *s1, char *s2, int i, int j)
{
	if (strlen(s1) == 0 && strlen(s2) == 0)
		return (1);
	if (s2[j] == '*')
		cmp(s1, s2, i, j + 1);
	if (s1[i] == s2[j])
		return (1);
	return (0);
}
