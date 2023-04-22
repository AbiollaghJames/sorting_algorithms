#include "sort.h"
/**
 * swap - swaps x and y
 * @x: first int
 * @y: second int
 */
void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}
/**
 * quick_sort - sorts an array using quick_sort
 * @array: array to be sort
 * @size: array size
 */
void quick_sort(int *array, size_t size)
{
	size_t i, j, p = size - 1;

	if (size < 2)
		return;
	i = 0;
	for (j = 0; j < p; j++)
	{
		if (array[j] <= array[p])
		{
			if (array[j] != array[i])
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
			i++;
		}
	}
	if (array[size - 1] != array[i])
	{
		swap(&array[i], &array[size - 1]);
		print_array(array, size);
	}
	quick_sort(array, i);
	quick_sort(array, size - i);
}
