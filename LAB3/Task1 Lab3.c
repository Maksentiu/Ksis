#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int choice(int n){				
	printf("1.Enter the array yourself.\n");
	printf("2.Generate an array.\n");
	
	while (scanf_s("%d", &n) < 1 || (n != 1 && n != 2)){
		printf("Try again =)\n");
		rewind(stdin);
	}
	return n;
}	 //Проверка на выбор
int check(int x){			
	while (scanf_s("%d", &x) != 1 || x > 100 || x < 1){
		printf("Try again =)\n");
		rewind(stdin);
	}
	return x;
}	//проверка на ввод
int main()
{
	int arraySize = 1;
	int array[100];
	int n = 0;
	int ProductOfNegative = 1;
	int SumOfPositive = 0;
	int MaxNumber = 0;
	int i;
	n = choice(n);
	if (n == 1){
		printf("Input the size of the array:\n");
		arraySize = check(arraySize);
		printf("Input elements of thre array:\n");
		for (int i = 0; i < arraySize; i++) {
			while (scanf_s("%d", &array[i]) < 1) {
				printf("Try again =)");
				rewind(stdin);
			}
		}
	}
	else if (n == 2){
		printf("Input the size of the array:\n");
		arraySize = check(arraySize);
		srand(time(0));							//очистка ввода
		printf("Generated array:\n");
		for (int i = 0; i < arraySize; i++){
			array[i] = rand() % 200 - 100 ;		//генерация рандомных элементов
			printf("%d ", array[i]);
		}
	}
	for ( i = 0; i < arraySize; i++){
		if (array[i] < 0) 
			ProductOfNegative *= array[i];	  //нахождение произведения отритцательных
		if (array[i] > array[MaxNumber])      //нахождение максимального элемента
				MaxNumber = i;
	}
	for (i = 0; i < MaxNumber; i++){
		if (array[i] > 0)
			SumOfPositive += array[i];		 //нахождение суммы положительных до максимального элемента
	}
	printf("\nThe sum of the positive elements of the array located up to the maximum element = %d", SumOfPositive);
	printf("\nThe product of negative array elements = %d", ProductOfNegative);
	return 0;
}