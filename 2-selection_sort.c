#include "sort.h"
/**
 * selection_sort - function that uses selection sort to sort an array
 * @array: Array to be sorted
 * @size: size/length of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	
	/* Interate the array 1 index at a time */
	for (i = 0; i < size - 1; i++)
	{
		size_t min_val = i;
		
		/* find index of min number in unsorted array */
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_val])
			{
				min_val = j;
			}
		}
		/* check equality of min_value index and i index then swap */
		if (min_val != i)
		{
			size_t temp;
			temp = array[i];
			array[i] = array[min_val];
			array[min_val] = temp;
		}
		print_array(array, size);
	}
}
