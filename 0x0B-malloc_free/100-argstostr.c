#include <stdlib.h>
#include "main.h"

/**
 * argstostr - function concatenates all the arguments of your program.
 * @ac: pointer
 * @av: altura
 *
 * REturn: result
 */

char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, cont = 0;
	char *result, *new;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		new = av[i];
		while (*new)
		{
			cont++;
			new++;
		}

