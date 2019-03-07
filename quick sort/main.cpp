#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <limits.h>
#include <iostream>
#define SIZE 1000

int arr[SIZE];
int count = 0;
int size;

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int arr[], int begin, int end)
{
	int pivot, Left, Right, t;
	int tmp;
	Left = begin;
	Right = end;
	pivot = (int)((Left + Right) / 2);

	printf("\n [ %d�ܰ� : pivot=%d ] \n", ++count, arr[pivot]);
	while (Left < Right){
		while ((arr[Left] < arr[pivot]) && (Left < Right)) Left++;
		while ((arr[Right] >= arr[pivot]) && (Left < Right)) Right--;
		
		if (Left < Right){
			swap(&arr[Left], &arr[Right]);

			if (Left == pivot){
				pivot = Right;
			}
		}
	}

	swap(&arr[pivot], &arr[Right]);
	for (int i = 0; i < size; i++){
		printf(" %d", arr[i]);
	}
	printf("\n");
	return Right;
}


void QuickSort(int arr[], int begin, int end) // �ð� ���⵵ : O(nLogn) , �־��� �� �ð����⵵ : O(n^2)
{
	int p; // ��Ƽ��
	if (begin < end){
		p = partition(arr, begin, end);
		QuickSort(arr, begin, p - 1);
		QuickSort(arr, p + 1, end);
	}
}


int main()
{
	int arr[] = { 2, 5, 4, 6, 9, 7, 8, 1, 3 };
	size = 9;
	printf("\n [ �ʱ� ���� ] \n");
	for (int i = 0; i < size - 1; i++)
		printf(" %d", arr[i]);
	printf("\n");

	QuickSort(arr, 0, size - 1);

	system("pause");
	return 0;
}