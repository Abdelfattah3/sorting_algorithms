#include "sort.h"
/**
* swap_a - swaps two elements
* @a: 1st element
* @b: 2nd element
*/
void swap_a(int *a, int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
* quick_sorting - quick sorting technique
* @array: array to be sorted
* @l: pivot element
* @h: highest element
* @size: the size of the array
*/
void quick_sorting(int *array, int l, int h, size_t size)
{
	int j;

	if (l < h)
	{
		j = partition(array, l, h, size);
		quick_sorting(array, l, j - 1, size);
		quick_sorting(array, j + 1, h, size);
	}
}
/**
* quick_sort - sorts an array based on quick way
* @array: the array to be sorted
* @size: the size of the array
*/
void quick_sort(int *array, size_t size)
{
	if (size <= 1)
	{
		return;
	}
	quick_sorting(array, 0, size - 1, size);
}
/**
* partition - sort the array by splitting it
* @array: array to be sorted
* @l: pivot element
* @h: highest element
* @size: the size of the array
* Return: the partition element
*/
int partition(int *array, int l, int h, size_t size)
{
	int i, j;
	int pivot = array[h];

	i = l - 1;
	for (j = l; j <= h - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap_a(&array[i], &array[j]);
			print_array(array, size);
		}
	}
	swap_a(&array[i + 1], &array[h]);
	print_array(array, size);
	return (i + 1);
}
