#include "sort.h"
/**
 * bubble_sort - sort the elements of an array
 * @array: the given array
 * @size: the array size
 */
void bubble_sort(int *array, size_t size)
{
	int i, j, temp;
	bool swapped;

	for (i = 0; i < size - 1; i++)
	{
		swapped = false;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped = true;
				print_array(array, size);
			}
		}
		if (swapped == false)
			break;
	}
}