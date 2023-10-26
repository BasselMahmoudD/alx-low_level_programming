#include "main.h"

/**
 * flip_bits - return number of the bits that would need to be flipped
 * @n: first number
 * @index: second number
 * Return: number of the bits to f;ip to convert mubers
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorval = n ^ m;
	unsigned int count = 0;

	while (xorval)
	{
		if (xorval & 1uL)
			count++;
		xorval = xorval >> 1;
	}
	return (count);
}
