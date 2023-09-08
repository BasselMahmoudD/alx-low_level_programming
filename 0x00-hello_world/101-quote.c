#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print a qoute using write function
 *
 * Return: 1(error).
*/

int main(void)
{
	cah quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, quo, 59);
	return (1);
}
