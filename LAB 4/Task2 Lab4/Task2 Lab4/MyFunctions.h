#pragma once
int choice(int n);   //проверка выбора

void check(int array[100][100], int i, int j);    //проверка на ввод

int check_arraySize(int k);

void rand_element(int array[100][100], int lin, int col); //функция заполнения массива рандомными элементами

void fill_array(int array[100][100], int lin, int col); //функция заполнения массива рандомными элементами

void input_array(int lin, int col, int array[100][100]);

void sort_array(int lin, int col, int itr, int fl, int array[100][100]);
