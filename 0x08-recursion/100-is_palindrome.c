#include <string.h>

int palindrome(char *s, int i, int j);

/**
 * is_palindrome - checks if a string is palindrome
 * @s: string to be checked
 * Return: 1 if string is palindrome, else 0
 */

int is_palindrome(char *s)
{
	int j = strlen(s) - 1;

	return (palindrome(s, 0, j));
}

/**
 * palindrome - checks if a string is palindrome
 * @s: string to be checked
 * @j: recursion looper
 * @i: recursion looper
 * Return: 1 if palindrome, else 0
 */

int palindrome(char *s, int i, int j)
{
	if (strlen(s) == 0)
		return (1);
	if (i >= j)
		return (1);
	if (s[i] == s[j])
		return (palindrome(s, i + 1, j - 1));
	return (0);
}
