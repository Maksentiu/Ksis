#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int choice(int n) 
{
    printf("1.Enter the arrays yourself.\n");
    printf("2.Generate an arrays.\n");

    while (scanf_s("%d", &n) < 1 || (n != 1 && n != 2) || getchar() != '\n') {
        printf("Try again =)\n");
        rewind(stdin);
    }

    return n;
}

void check(int array[100][100], int i, int j)
{
    int lastchar;

    while (scanf_s("%d", &array[i][j]) != 1 || ((lastchar = getchar()) != '\n') && lastchar != ' ')
    {
        printf("Try again =)\n");
        rewind(stdin);
    }
}

void rand_element(int array[100][100], int arraySize) 
{
    for (int i = 0; i < arraySize; i++)
        for (int j = 0; j < arraySize; j++) {
            array[i][j] = rand() % 201 - 101;
        }
}

void fill_array(int array[100][100], int arraySize) 
{

    for (int i = 0; i < arraySize; i++) {
        for (int j = 0; j < arraySize; j++)
            printf("%d ", array[i][j]);

        printf("\n");
    }
}

void input_array(int arraySize, int array[100][100])
{
    printf("\nInput array: \n");

    for (int i = 0; i < arraySize; i++)
    {
        for (int j = 0; j < arraySize; j++)
            check(array, i, j);
    }

    printf("\nArray: \n");

    fill_array(array, arraySize);
}

void sum_in_area(int arraySize, int sum, int array[100][100])
{
    for (int i = 0; i < arraySize / 2; i++)
        for (int j = 0; j < arraySize / 2; j++)
        {
            sum += array[i][j];
        }

    printf("\nsum in the first area = %d", sum);
}

int new_size(int s)
{
    if (s % 2 != 0)
        s += 1;
    return s;
}

int check_arraySize(int k)
{
    while (scanf_s("%d", &k) != 1 || k > 100 || k <= 0 || getchar() != '\n') {
        printf("Try again =)\n");
        rewind(stdin);
    }
    return k;
}