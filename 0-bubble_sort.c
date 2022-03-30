#include "sort.h"
/**
 * bubble_sort - Function sorts an array of integers in ascending order
 * @array: list of arguments to be sorted
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
  size_t i, j;
  int swapped;

  if (array == NULL || size < 2)
    return;
  for (i = 0; i < size - 1; i++)
    {
      swapped = 0;
      for (j = 0; j < (size - 1 - i); j++)
	{
	  if (array[j] > array[j + 1])
	    {
	      swapped = swap(&array[j], &array[j + 1]);
	      print_array(array, size);
	    }
	}
      if (swapped == 0)
	break;
    }
}
/**
 * swap - Function swaps arguments
 * @i: argument 1
 * @j: argument 2
 *
 * Return: returns  on success 1
 */
int swap(int *i, int *j)
{
  int temp;

  temp = *i;
  *i = *j;
  *j = temp;
  return (1);
}
