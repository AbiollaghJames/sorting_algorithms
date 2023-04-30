#include "sort.h"
/**
 * shell_sort - sorts array in ascending order using Knuth's sequence
 * @array: Array to be sorted
 * @size: Size or length of the array
 */
void shell_sort(int *array, size_t size)
{
	size_t i, j, gap;
	long int temp;

	for (gap = size / 2; gap > 0; gap /= 2)
	{
		for (j = gap; j < size; j++)
		{
			temp = array[j];

			for (i = j; i >= gap && array[i - gap] > temp; i -= gap)
			{
				array[i] = array[i - gap];
			}
			array[i] = temp;
		}
		print_array(array, size);
	}
}
