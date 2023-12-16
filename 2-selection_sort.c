#include "sort.h"
/**
* selection_sort - sorts an array based on bubble way
* @array: the array to be sorted
* @size: the size of the array
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j, k;
	int te;

	if (!array || !size)
	{
		return;
	}
	for (i = 0; i < size - 1; i++)
	{
		for (j = k = i; j < size; j++)
		{
			if (array[j] < array[k])
			{
				k = j;
			}
		}
		if (array[i] != array[k])
		{
			te = array[i];
			array[i] = array[k];
			array[k] = te;
			print_array(array, size);
		}
	}
}
