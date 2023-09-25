#include "sort.h"

/**
 * swap_integers - Swap two integers in an array.
 * @m: The first integer to swap.
 * @n: The second integer to swap.
 */
void swap_integers(int *m, int *n)
{
	int temp;

	temp = *m;
	*m = *n;
	*n = temp;
}

/**
 * selection_sort - Sorting an array of integers in ascending order
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = array + i;
		for (j = i + 1; j < size; j++)
			min = (array[j] < *min) ? (array + j) : min;

		if ((array + i) != min)
		{
			swap_integers(array + i, min);
			print_array(array, size);
		}
	}
}
