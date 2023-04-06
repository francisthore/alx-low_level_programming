#include <string.h>

int palindrome(char *s, int len, int i);

/**
 * is_palindrome - checks if a string is palindrome
 * @s: string to be checked
 * Return: 1 if string is palindrome, else 0
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	return (palindrome(s, len, 0));
}

/**
 * palindrome - checks if a string is palindrome
 * @s: string to be checked
 * @len: length of the string
 * @i: recursion looper
 * Return: 1 if palindrome, else 0
 */

int palindrome(char *s, int len, int i)
{
	if (len == 0)
		return (1);
	if (s[i] != s[len - i - 1])
		return (0);
	palindrome(s, len, i + 1);
	return (1);
}
