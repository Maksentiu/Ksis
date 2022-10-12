#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int choice(int n)	//проверка выбора
{
	printf("1.Enter the arrays yourself.\n");
	printf("2.Generate an arrays.\n");

	while (scanf_s("%d", &n) < 1 || (n != 1 && n != 2))
	{
		printf("Try again =)\n");
		rewind(stdin);
	}

	return n;
}

int check(int x)	//проверка на ввод
{
	while (scanf_s("%d", &x) != 1 || x > 100 || x < 1)
	{
		printf("try again =)\n");
		rewind(stdin);
	}

	return x;
}	

void bubble(int* array, int arraySize)		//функция перестановки элементов массива в порядке возростания
{
	for (int j = 0; j < arraySize; j++) 
		for (int i = 0; i < arraySize; i++)
			if (array[i] < array[i-1]) 
			{
				int bufer;

				bufer = array[i-1];
				array[i-1] = array[i];
				array[i] = bufer;
			}
}	

void fill_array(int arraySize, int* array) //функция заполнения массива рандомными элементами 
{
	for (int i = 0; i < arraySize; i++)
	{
		array[i] = rand() % 200 - 100;
		printf("%d ", array[i]);
	}
}	

int main() 
{
	int arraySize1 = 0, arraySize2 = 0, n = 0, i = 0;
	int array1[100], array2[100], array3[300];

	n = choice(n);

	if (n == 1)
	{
		printf("Input size of the first array:\n");
		arraySize1 = check(arraySize1);

		printf("\nInput size of the second array:\n");
		arraySize2 = check(arraySize2);
		
		printf("Input elements of the first array: ");

		for (i = 0; i < arraySize1; i++)
			while (scanf_s("%d", &array1[i]) < 1) 
			{
				printf("Try again =)");
				rewind(stdin);
			}

		printf("\nInput elements of the second array: ");

		for (i = 0; i < arraySize2; i++)
			while (scanf_s("%d", &array2[i]) < 1) 
			{
				printf("Try again =)");
				rewind(stdin);
			}
	}
	else if (n == 2)
	{
		printf("Input size of the first array:\n");
		arraySize1 = check(arraySize1);

		printf("\nInput size of the second array:\n");
		arraySize2 = check(arraySize2);

		srand(time(0));					//установление ключа генерации
		
		printf("Generated arrays:\n");

		printf("First array: ");
		fill_array(arraySize1, array1);

		printf("\nSecond array: ");
		fill_array(arraySize2, array2);
	}

	printf("\nSorted first array: ");
	bubble(array1, arraySize1);				//перестановка элементов по возрастанию

	for (i = 0; i < arraySize1; i++) 
		printf("%d ", array1[i]);	
	
	printf("\nSorted second array: ");
	bubble(array2, arraySize2);				//перестановка элементов по возрастанию

	for (i = 0; i < arraySize2; i++) 
		printf("%d ", array2[i]);			

	printf("\nSorted third array: ");		//перестановка элементов по возрастанию

	int i1 = 0, i2 = 0;
	int arraySize3 = arraySize1 + arraySize2;

	for (int i3 = 0; i3 < arraySize3; i3++) //объединение двух массивов в третий
	{
		if(i1 < arraySize1 && i2 < arraySize2) 
			if (array1[i1] < array2[i2]) 
			{
				array3[i3] = array1[i1];
				i1++;
			}
			else 
			{
				array3[i3] = array2[i2];
				i2++;
			}

		else 
			if (i1 == arraySize1) 
			{
				array3[i3] = array2[i2];
				i2++;
			}
			else 
			{
				array3[i3] = array1[i1];
				i1++;
			}
	}																	
				
	for (i = 0; i < arraySize3; i++) 
		printf("%d ", array3[i]);			//вывод элементов массива в порядке возростания

	return 0;
}