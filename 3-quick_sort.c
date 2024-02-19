#include "sort.h"
/**
 *partition - divide the array arround the pivot
 *@array: the given array
 *@start: first array element
 *@end: last array element
 *@size: size of the array
 *Return: return the position of the pivot
 */
int partition(int *array, ssize_t start, ssize_t end, size_t size)
{
	int pivot, temp;
	ssize_t i, j;

	pivot = array[end];
	i = start;
	for (j = start; j < end; j++)
	{
		if (array[j] < pivot)
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			if (array[i] != array[j])
				print_array(array, size);
			i++;
		}
	}
	temp = array[i];
	array[i] = array[end];
	array[end] = temp;
	if (array[i] != array[end])
		print_array(array, size);
	return (i);
}


/**
 *Quik - help in sorting the array
 *@array: the given array
 *@start: first array element
 *@end: last array element
 *@size: size of the array
 */

void Quik(int *array, ssize_t start, ssize_t end, int size)
{
	ssize_t pivot = 0;

	if (start < end)
	{
		pivot = partition(array, start, end, size);
		Quik(array, start, pivot - 1, size);
		Quik(array, pivot + 1, end, size);
	}
}


/**
 *quick_sort - sort the array
 *@array: the given array
 *@size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	Quik(array, 0, size - 1, size);
}
