#include "sort.h"

/**
 * print_array - Prints an array
 * @array: The given array
 * @size: size of the array
 */
void print_array(int array[], int size)
{
	int i;

	for (i = 0; i < size; i++)
		printf("%d ", array[i]);
	printf("\n");
}
