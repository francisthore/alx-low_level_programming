#include <stdlib.h>
#include <stddef.h>

/**
 * argstostr - concatenates arguments
 * @ac: args counter
 * @av: array of args
 * Return: pointer to string
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i;

	if (ac == 0 || av == NULL)
		return (NULL);

	str = malloc(sizeof(char) * ac);

	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		str[i] = 'h';
	return (str);
}
