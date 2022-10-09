#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending
 * order using bubble algorithm
 * @array: array of elements
 * @size: the size of the array
 *
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, flag = 1;
	int tmp;

	while (flag == 1)
	{
		flag = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				flag = 1;
				print_array(array, size);
			}
		}
	}
}
