#include "main.h"

/**
 * *_strncpy - copy tow string
 *
 * @dest: input1
 * @src: input2
 * @n: input3
 *
 * Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && srce[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
