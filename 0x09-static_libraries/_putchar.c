#include <unistd.h>
#include "main.h"

/**
 *_putchar - write a character a
 *
 *@a: input
 *Return: on Success 1, an error -1 is returned
*/

int _putchar(char a)
{
	return (write(1, &a, 1));
}
