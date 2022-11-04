#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int choice(int n)	//проверка выбора
{
	printf("1.Enter the arrays yourself.\n");
	printf("2.Generate an arrays.\n");

	while (scanf_s("%d", &n) < 1 || (n != 1 && n != 2) || getchar() != '\n')
	{
		printf("Try again =)\n");
		rewind(stdin);
	}

	return n;
}

void check(int array[8][8], int i, int j)	//проверка на ввод
{
	int lastChar;

	while (scanf_s("%d", &array[i][j]) != 1 || ((lastChar = getchar()) != '\n') && lastChar != ' ')
	{
		printf("Try again =)\n");
		rewind(stdin);
	}
}

void rand_element(int array[8][8])			//функция заполнения массива рандомными элементами
{
	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
			array[i][j] = rand() % 201 - 101;
}

void fill_array(int array[8][8])			//функция заполнения массива рандомными элементами
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
			printf("%d ", array[i][j]);

		printf("\n");
	}
}
void input_array(int array[8][8])
{
	printf("\nInput array 8x8: \n");

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
			check(array, i, j);
	}

	printf("\nArray: \n");
	fill_array(array);
}

void find_k(int array[8][8])
{
	int fl = 0;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (array[i][j] == array[j][i])
				fl += 1;

			if (fl == 8)
				printf("\nk = %d", (i + 1));
		}
		fl = 0;
	}
}

void sum_with_negative(int array[8][8])
{
	int sum = 0;

	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
			if (array[i][j] < 0)
			{
				sum = 0;

				for (int j = 0; j < 8; j++)
					sum += array[i][j];

				printf("\nSum%d = %d", (i + 1), sum);
			}
}