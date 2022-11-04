#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "MyFunctions.h"

int main()
{
    int n = 0, fl = 0, itr = 0;
    int array[100][100], col = 0, lin = 0;

    n = choice(n);

    printf("\nInput size of the array:\n");

    printf("\nlines = ");
    lin = check_arraySize(lin);

    printf("column = ");
    col = check_arraySize(col);

    if (n == 1)
    {
        input_array(lin, col, array);
    }

    else if (n == 2)
    {
        printf("\nArray: \n");

        srand(time(0));
        rand_element(array, lin, col);
        fill_array(array, lin, col);
    }

    sort_array(lin, col, itr, fl, array);

    printf("\nSorted array:\n");
    fill_array(array, lin, col);

    return 0;
}