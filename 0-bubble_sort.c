#include "sort.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * bubble_sort - a function that sorts an array using bubble sort
 * @array: an array to be sorted
 * @size: size of an array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
size_t i, tmp, j;
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
if (array[j] < array[j - 1])
{
tmp = array[j - 1];
array[j - 1] = array[j];
array[j] = tmp;
print_array(array, size);
}
}
}
