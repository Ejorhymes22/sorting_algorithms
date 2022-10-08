#include <stdio.h>
#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascendingg order
 * @array: the array pointer
 * @size: size of the aray
 *
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, k = 0;
	int min;

	while (k < size)
	{
		min = array[k];
		i = k;
		while (i < size)
		{
			if (min > array[i])
			{
				j = i;
				min = array[i];
			}
			i++;
		}
		if (min != array[k])
		{
			array[j] = array[k];
			array[k] = min;
			print_array(array, size);
		}
		k++;
	}
}
