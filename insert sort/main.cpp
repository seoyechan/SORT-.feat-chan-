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

void insertSort(int a[], int size)  // 시간 복잡도 : O(n^2)
{
	int temp;

	printf("\n\n <<<<<<<< 삽입정렬 시작 >>>>>>>>> \n");

	for (int i = 1; i < size; i++){
		temp = a[i];
		int j = i;
		while ((j > 0) && (a[j - 1] > temp)){
			a[j] = a[j - 1];
			j--;
		}

		a[j] = temp;
		printf("\n\n %d단계 : ", i);
		for (int t = 0; t < size; t++) printf("%d ", a[t]);
	}


}


int main()
{
	int arr[] = { 2, 5, 4, 6, 9, 7, 8, 1, 3 };
	int size = 9;
	insertSort(arr, size);


	system("pause");
	return 0;
}