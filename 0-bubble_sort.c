#include "sort.h"


/**
 * bubble_sort - a function that sorts an array using bubble sort
 * @array: an array to be sorted
 * @size: size of an array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
size_t i, tmp = 0, j;
if (size < 2)
	return;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (array[j] > array[j + 1] && array[j + 1])
{
tmp = array[j];
array[j] = array[j + 1];
array[j + 1] = tmp;
print_array(array, size);
}
}
}
}
