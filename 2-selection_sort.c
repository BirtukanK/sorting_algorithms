#include "sort.h"

/**
 * selection_sort - a function that sorts an array using selection sort
 * @array: array to be sorted
 * @size: size of an array
 */
void selection_sort(int *array, size_t size)
{
size_t i, j, small, tmp;
int flag = 0;
if (array == NULL)
	return;
for (i = 0; i < size - 1; i++)
{
small = i;
flag = 0;
for (j = i + 1; j < size; j++)
{
if (array[j] < array[small])
{
small = j;
flag += 1;
}
}
tmp = array[small];
array[small] = array[i];
array[i] = tmp;
if (flag != 0)
	print_array(array, size);
}
}
