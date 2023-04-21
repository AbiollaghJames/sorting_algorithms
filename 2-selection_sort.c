#include "sort.h"
/**
 * selection_sort - function that uses selection sort to sort an array
 * @array: Array to be sorted
 * @size: size/length of the array
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;

<<<<<<< HEAD
	if (size > 2)
	{
		/* Interate the array 1 index at a time */
		for (i = 0; i < size - 1; i++)
=======
	/* Interate the array 1 index at a time */
	for (i = 0; i < size - 1; i++)
	{
		size_t min_val = i;

		/* find index of min number in unsorted array */
		for (j = i + 1; j < size; j++)
>>>>>>> eaca11305a037f6fbb5e2a540a5f61bd655b9c20
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
<<<<<<< HEAD
=======
		/* check equality of min_value index and i index then swap */
		if (min_val != i)
		{
			size_t temp;

			temp = array[i];
			array[i] = array[min_val];
			array[min_val] = temp;
			print_array(array, size);
		}
>>>>>>> eaca11305a037f6fbb5e2a540a5f61bd655b9c20
	}
}
