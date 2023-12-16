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
	i = 0;
	while (i < size)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				f = array[j];
				array[j] = array[j + 1];
				array[j + 1] = f;
				print_array(array, size);
			}
		}
		i++;
	}
}
