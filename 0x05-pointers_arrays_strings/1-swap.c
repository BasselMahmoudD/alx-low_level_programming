#include "main.h"

/**
 *swap_int - swap two integer number
 *@a: input 1
 *@b: input 2
*/

void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;
	*b = x;
}
