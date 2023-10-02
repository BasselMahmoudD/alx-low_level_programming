#include "main.h"

/**
 * *_strcpy - strcpy
 *
 * @dest: input1
 * @src: input2
 *
 * Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);

}
