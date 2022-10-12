#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int choice(int n)								//проверка выбора
{
	printf("1.Enter the array yourself.\n");
	printf("2.Generate an array.\n");

	while (scanf_s("%d", &n) < 1 || (n != 1 && n != 2))
	{
		printf("Try again =)\n");
		rewind(stdin);
	}

	return n;
}	

int check(int x)								//проверка на ввод
{
	while (scanf_s("%d", &x) != 1 || x > 100 || x < 1)
	{
		printf("try again =)\n");
		rewind(stdin);
	}

	return x;
}

int main()
{
	int arraySize = 1;
	int array[100];
	int n = 0;
	int d = 0;
	int i;

	n = choice(n);

	if (n == 1)
	{
		printf("Input the size of the array:\n");
		arraySize = check(arraySize);

		printf("Input elements of the array:\n");

		for (int i = 0; i < arraySize; i++)
			while (scanf_s("%d", &array[i]) < 1) 
			{
				printf("Try again =)");
				rewind(stdin);
			}
	}

	else if (n == 2)
	{
		printf("Input the size of the array:\n");
		arraySize = check(arraySize);

		srand(time(0));

		printf("Generated array:\n");

		for (int i = 0; i < arraySize; i++)
		{
			array[i] = rand() % 200 - 100;
			printf("%d ", array[i]);			//генерация рандомных элементов
		}
	}

	int array2[500];

	for (i = 0, d = 0; i < arraySize; i++, d++) 
	{
		array2[d] = array[i];
		if ((i + 1) % 4 == 0)					//проверяем остаток от деления
		{
			array2[d + 1] = array2[d + 2] = array2[d + 3] = array2[d + 4] = array2[d + 5] = 0;
			d += 5;								//вставляем 5 нулей после каждого 4-того элемента  
		}
	}

	printf_s("\nFinal array:\n");

	for (int i = 0; i < d; i++)
		printf_s("%d ", array2[i]);

	return 0;
}