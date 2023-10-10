#include "search_algos.h"

/**
 * binary_search - search a value in a sorted array
 * @array: pointer to the array we searching for
 * @size: size of the array
 * @value: the value to search for
 * Return: the value index else -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, srt = 0, end = size - 1;
	int m;

	if (array == NULL)
		return (-1);

	while (srt <= end)
	{
		m = (srt + end) / 2;

		printf("Searching in array: ");
		for (i = srt; i <= end; i++)
		{
			if (i != end)
				printf("%d, ", array[i]);
			else
				printf("%d", array[i]);
		}
		printf("\n");


		if (array[m] < value)
			srt =  m + 1;
		else if (array[m] > value)
			end = m - 1;
		else
			return (m);
	}
	return (-1);
}
