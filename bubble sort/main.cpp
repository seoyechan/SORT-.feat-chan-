#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <limits.h>
#include <iostream>
#define SIZE 1000

int arr[SIZE];

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void BubbleSort(int a[], int size) // 시간 복잡도 : O(n^2)
{
	printf("<<<<<<<<<<< Bubble Sort 시작 >>>>>>>>>>>>");
	for (int i = size - 1; i > 0; i--){
		printf("\n %d 단계",size - i);
		for (int j = 0; j <= i; j++){
			if (a[j - 1] > a[j])
				swap(&a[j - 1], &a[j]);
		
			printf("\n\t");
			for (int t = 0; t < size; t++)
				printf("%d",a[t]);
		
		}
	}
}


int main()
{
	int arr[] = { 2, 5, 4, 6, 9, 7, 8, 1, 3 };
	int size = 9;
	
	BubbleSort(arr, size);

	system("pause");
	return 0;
}