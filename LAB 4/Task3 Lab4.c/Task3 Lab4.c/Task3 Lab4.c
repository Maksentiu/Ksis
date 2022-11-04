#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "MyFunctions.h"

int main()
{
    int n = 0, sum = 0;
    int array[100][100], arraySize = 0;

    n = choice(n);

    printf("\nInput size of the array:\n");

    arraySize = check_arraySize(arraySize);

    if (n == 1)
    {
        input_array(arraySize, array);
    }
    else if (n == 2)
    {
        printf("\nArray: \n");

        srand(time(0));
        rand_element(array, arraySize);
        fill_array(array, arraySize);
    }

    arraySize = new_size(arraySize);

    sum_in_area(arraySize, sum, array);

    return 0;
}