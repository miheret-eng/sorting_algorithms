#include "sort.h"

/**

 * counting_sort - function uses counting sort algorithm

 * @array: array to be sorted

 * @size: size of the array

 */

void counting_sort(int *array, size_t size)
  
{
  
  int k, total, old_count;
  
  int i;
  
  int n = (int)size;
  
  int output[size]; /* store sorted elements */
  
  k = k_finder(array, size);
  
  int freq[k + 1];
  

  
  memset(freq, 0, sizeof(freq));
  
  for (i = 0; i < n; i++)
    
    freq[array[i]]++;
  
  total = 0;
  
  for (i = 0; i < k + 1; i++)
    
    {
      
      old_count = freq[i];
      
      freq[i] = total;
      
      total += old_count;
      
    }
  
  for (i = 0; i < n; i++)
    
    {
      
      output[freq[array[i]]] = array[i];
      
      freq[array[i]]++;
      
    }
  
  for (i = 0; i < n; i++)
    
    {
      
      array[i] = output[i];
      
    }
  
  for (i = 0; i < n; i++)
    
    {
      
      if (i > 0)
	
	printf(", ");
      
      printf("%d", array[i]);
      
    }
  
  printf("\n");
  

  

  
}

/**

 * k_finder - function finds the value of k

 * @array: array to be sorted

 * @size: array size

 *

 * Return: The value of k

 */

int k_finder(int *array, size_t size)
  
{
  
  size_t i;
  
  int temp;
  

  
  temp = array[0];
  
  for (i = 0; i < size; i++)
    
    {
      
      if (array[i] > temp)
	
	temp = array[i];
      
    }
  
  return (temp);
  
}
