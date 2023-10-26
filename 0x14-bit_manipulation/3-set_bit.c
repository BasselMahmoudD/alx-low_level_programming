#include "main.h"

/**
 * set_bit - sets the bit
 * @n: the numbers to index
 * @index: the bit to set
 * Return: the bit state or -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (!!(*n |= 1l << index);
}
