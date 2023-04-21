#include "sort.h"
/**
 * swap - swaps two ints
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
 * bubble_sort - sorts an array using bubble sort
 * @array: array to be sort
 * @size: array size
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (size < 2)
		return;
	/*accesses all array elements*/
	for (i = 0; i < size - 1; i++)
	{
		/*compares all array elements*/
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}
