#include "sort.h"
/**
 * bubble_sort - sorts an array using bubble sort
 * @array: array to be sort
 * @size: array size
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, temp;

	/*accesses all array elements*/
	for (i = 0; i < size - 1; i++)
	{
		/*compares all array elements*/
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
