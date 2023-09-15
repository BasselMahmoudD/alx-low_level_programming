#include "main.h"

/**
 * print_square - print a square using the character #
 *
 * @size: is the size of the square
 *
 * Return: always 0
*/

void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int row, coloumn;

		for (column = 1; column <= size; column++)
		{
			for (row = 1; row < size; row++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
