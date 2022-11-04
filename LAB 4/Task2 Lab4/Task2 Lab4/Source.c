#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int choice(int n)     //проверка выбора
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

void check(int array[100][100], int i, int j)     //проверка на ввод
{
    int lastchar;
    while (scanf_s("%d", &array[i][j]) != 1 || ((lastchar = getchar()) != '\n') && lastchar != ' ')
    {
        printf("Try again =)\n");
        rewind(stdin);
    }
}

int check_arraySize(int k)
{
    while (scanf_s("%d", &k) != 1 || k > 100 || k <= 0 || getchar() != '\n')
    {
        printf("Try again =)\n");
        rewind(stdin);
    }

    return k;
}

void rand_element(int array[100][100], int lin, int col) //функция заполнения массива рандомными элементами
{
    for (int i = 0; i < lin; i++)
        for (int j = 0; j < col; j++)
            array[i][j] = rand() % 201 - 101;
}

void fill_array(int array[100][100], int lin, int col) //функция заполнения массива рандомными элементами
{

    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
            printf("%d ", array[i][j]);

        printf("\n");
    }
}

void input_array(int lin, int col, int array[100][100])
{
    printf("\nInput array: \n");

    for (int i = 0; i < lin; i++)
        for (int j = 0; j < col; j++)
            check(array, i, j);

    printf("\nArray: \n");

    fill_array(array, lin, col);
}

void sort_array(int lin, int col, int itr, int fl, int array[100][100])
{
    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
            if (array[i][j] < array[i][j + 1])
            {
                while (itr < col)
                {
                    for (int j = 0; j < col; j++)
                        if (array[i][j] < array[i][j + 1])
                        {
                            int buf = array[i][j];
                            array[i][j] = array[i][j + 1];
                            array[i][j + 1] = buf;
                        }

                    itr++;
                }

                fl = 1;
            }

        if (fl == 1)
        {
            printf("\nLines which is not sorted = %d\n", (i + 1));
            break;
        }
    }
}