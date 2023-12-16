#include "sort.h"
/**
* swap - swaps two elements
* @a: 1st element
* @b: 2nd element
*/
void swap(int *a, int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}
