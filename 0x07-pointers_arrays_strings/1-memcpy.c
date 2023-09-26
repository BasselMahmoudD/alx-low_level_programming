#include "main.h"

/**
 * _memcpy - copy character
 *
 * @dest: input1
 * @src: input2
 * @n: input3
 *
 * Return: character
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; itr < n; itr++)
		dest[itr] = src[itr];
	return (dest);
}
