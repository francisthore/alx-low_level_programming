#include <string.h>

int palindrome(char *s, int i);

/**
 * is_palindrome - checks if a string is palindrome
 * @s: string to be checked
 * Return: 1 if string is palindrome, else 0
 */

int is_palindrome(char *s)
{
	return (palindrome(s, 1));
}

/**
 * palindrome - checks if a string is palindrome
 * @s: string to be checked
 * @i: recursion looper
 * Return: 1 if palindrome, else 0
 */

int palindrome(char *s, int i)
{
	if (strlen(s) == 0)
		return (1);
	if (s[0] != s[strlen(s) - i])
		return (0);
	palindrome(s + 1, i + 1);
	return (1);
}
