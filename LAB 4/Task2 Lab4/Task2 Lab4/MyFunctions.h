#pragma once
int choice(int n);   //�������� ������

void check(int array[100][100], int i, int j);    //�������� �� ����

int check_arraySize(int k);

void rand_element(int array[100][100], int lin, int col); //������� ���������� ������� ���������� ����������

void fill_array(int array[100][100], int lin, int col); //������� ���������� ������� ���������� ����������

void input_array(int lin, int col, int array[100][100]);

void sort_array(int lin, int col, int itr, int fl, int array[100][100]);
