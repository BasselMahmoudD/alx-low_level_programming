#include "main.h"

/**
 * *rot13 - encoded a string using rot13
 * @s: input
 *
 * Return: Encoded string
*/
char *rot13(char *s)
{
	int i;

	char rot13[] = "abcdefghijklmnopqrstuvWxyzABCDEFGHIJKLMNOPQRTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ptr = s;

	while (*s)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*s == rot13[i])
			{
				*s = ROT13[i];
				break;
			}
		}
		s++;
	}
	return (ptr);
}
