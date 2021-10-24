#include "sort.h"

void selection_sort(int *array, size_t size)
{
        size_t i, j;
        int tmp;

        for (i = 0; i < size - 1; i++)
        {
                size_t jMin = i;
                for (j = i+1; j < size; j++){
                        if(array[j] < array[jMin]){
                                jMin = j;    
                        }
                }
                if (jMin != i)
                {
                        tmp = array[i];
                        array[i] = array[jMin];
                        array[jMin] = tmp;
                        print_array(array, size);
                }
        }
}