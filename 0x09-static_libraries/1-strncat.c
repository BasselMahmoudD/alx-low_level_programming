#include "main.h"

/**
 * *_strncat - concatenates two string with specific character
 *
 * @dest: input1
 * @src: input2
 * @n: input3
 *
 * Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;
	while (dest[c])
		c++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];
	dest[c + i] = '\0';
	return (dest);
}
