#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

void bubble_sort(int *array, size_t size)
{       
        size_t k, i;
        int tmp;
        int flag = 0;

        for (k = 0; k < size - 1; k++)
        {
                for (i = 0; i < size - 1 - k; i++)
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
                if (flag == 0)
                        return;
        }
}
