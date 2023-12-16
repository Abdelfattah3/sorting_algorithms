#include "sort.h"
/**
* bubble_sort - sorts an array based on bubble way
* @array: the array to be sorted
* @size: the size of the array
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int f;

	if (!array || !size)
	{
		return;
	}
	for (i = 0; i < size - 1; i++)
	{
		f = 0;
		for (j = 0; j < (size - 1 - i); j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				f = 1;
				print_array(array, size);
			}
		}
		if (f == 0)
		{
			break;
		}
	}
}
