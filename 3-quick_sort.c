#include "sort.h"
#include <stdlib.h>

/**
 * lomutoPartition - lomuto partition scheme
 * @array: array to partition
 * @low: index of the first element
 * @high: index of the last element
 * @size: size of an array
 * Return: int
 */
int lomutoPartition(int *array, int low, int high, size_t size)
{
int pivot = array[high];
int i = low, j;
size_t temp;
for (j = low; j < high; j++)
{
if (array[j] < pivot)
{
if (array[i] != array[j])
{
temp = array[i];
array[i] = array[j];
array[j] = temp;
print_array(array, size);
}
i++;
}
}
if (array[i] != array[high])
{
temp = array[i];
array[i] = array[high];
array[high] = temp;
print_array(array, size);
}
return (i);
}

/**
 * quick_sort_helper - performs as quick sort function
 * @arr: array
 * @low: lower index
 * @high: higher index
 * @size: size of an array
 */
void quick_sort_helper(int *arr, int low, int high, size_t size)
{
size_t partitionIndex = 0;
if (low < high)
{
partitionIndex = lomutoPartition(arr, low, high, size);
quick_sort_helper(arr, low, partitionIndex - 1, size);
quick_sort_helper(arr, partitionIndex + 1, high, size);
}
}

/**
 * quick_sort - function that sorts array using quick sort
 * @array: array to be sorted
 * @size: size of an array
 */

void quick_sort(int *array, size_t size)
{
if (array == NULL || size <= 1)
{
return;
}
quick_sort_helper(array, 0, size - 1, size);
}
