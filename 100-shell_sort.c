#include "sort.h"
/**
 * shell_sort - Sorts an array using the Shell sort algorithm
 * @array: The array to be sorted.
 * @size: Size of the array
 * Return: Nothing
 */
void shell_sort(int *array, size_t size)
{
	int temp;
	size_t gap = 0,  i, j;

	if (size < 2)
		return;

	while (gap <= size / 3)
		gap = gap * 3 + 1;

	while (gap >= 1)
	{
		for (i = gap; i < size; i++)
		{
			for (j = i; j >= gap && array[j] < array[j - gap]; j -= gap)
			{
				if (array[j] != array[j - gap])
				{
					temp = array[j];
					array[j] = array[j - gap];
					array[j - gap] = temp;
				}
			}
		}

		gap /= 3;
		print_array(array, size);
	}
}
