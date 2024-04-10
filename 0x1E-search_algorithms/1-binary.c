#include <stdio.h>

/**
* print_sub_list - prints a sublist
* @array: pointer to array
* @start_idx: start index
* @end_idx: end index
* Return: nothing
*/

void print_sub_list(int *array, size_t start_idx, size_t end_idx)
{
	if (!array)
		return;
	printf("Searching in array: ");
	while (start_idx <= end_idx)
	{
		printf("%d", array[start_idx]);
		if (start_idx < end_idx)
		{
			printf(", ");
		}
		start_idx++;
	}
	printf("\n");
}


/**
* binary_search - implementation of the binary search algoithm
* @array: pointer to array
* @size: size of array
* @value: search element
* Return: -1 on failure or index
*/

int binary_search(int *array, size_t size, int value)
{
	size_t low_idx, high_idx, mid;

	if (!array)
		return (-1);
	if (!array[(size - 1)])
		return (-1);
	low_idx = 0;
	high_idx = size - 1;
	while (low_idx <= high_idx)
	{
		print_sub_list(array, low_idx, high_idx);
		mid = (high_idx + low_idx) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low_idx = mid + 1;
		else
			high_idx = mid - 1;
	}
	return (-1);
}
