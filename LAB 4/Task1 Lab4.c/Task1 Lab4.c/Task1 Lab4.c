#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "MyFunctions.h"

int main()
{
	int n = 0, array[8][8];
	
	n = choice(n);

	if (n == 1)
		input_array(array);

	else if (n == 2)
	{
		printf("\nArray: \n");

		rand_element(array);
		fill_array(array);
	}

	find_k(array);

	printf("\n");

	sum_with_negative(array);

	return 0;
}


//1 2 3 4 5 6 2 8
//2 2 2 2 2 2 2 2
//1 2 3 4 -9 4 2 8  
//7 2 1 4 3 2 2 5
//-1 2 3 4 5 6 2 2
//-1 2 3 4 5 6 2 8
//2 2 2 2 2 2 2 2
//1 2 3 4 5 6 2 5
//k = 2
//k = 7
//Sum3 = 15
//Sum5 = 23
//Sum6 = 29