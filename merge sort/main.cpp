#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <limits.h>
#include <iostream>
#define SIZE 1000

int temp_arr[SIZE];
int count = 0;
int size;

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void merge(int arr[], int start, int middle, int end)
{
	int first_arr_point, second_arr_point, temp;
	first_arr_point = start;
	second_arr_point = middle + 1;
	temp = start;

	while (first_arr_point <= middle && second_arr_point <= end){
		if (arr[first_arr_point] <= arr[second_arr_point]){
			temp_arr[temp] = arr[first_arr_point];
			first_arr_point++;
		}
		else{
			temp_arr[temp] = arr[second_arr_point];
			second_arr_point++;
		}
		temp++;
	}

	if (first_arr_point > middle){
		for (int t = second_arr_point; t <= end; t++, temp++){
			temp_arr[temp] = arr[t];
		}
	}
	else{
		for (int t = first_arr_point; t <= middle; t++, temp++){
			temp_arr[temp] = arr[t];
		}
	}

	for (int t = start; t <= end; t++){
		arr[t] = temp_arr[t];
	}

	printf("\n 병합 정렬 >> ");

	for (int t = 0; t < size; t++){
		printf("%d", arr[t]);
	}
}


void mergeSort(int arr[], int start, int end)
{
	int middle;
	if (start < end){
		middle = (start + end) / 2;
		mergeSort(arr, start, middle);
		mergeSort(arr, middle + 1, end);
		merge(arr, start, middle, end);
	}
}


int main()  // 시간 복잡도 : O(nlog2n) 
{
	int arr[] = { 2, 5, 4, 6, 9, 7, 8, 1, 3 };
	size = 9;
	printf("\n [ 초기 상태 ] \n");

	printf("\n\n<<<<<<<<< 병합 정렬 수행 >>>>>>>>>>>\n");
	mergeSort(arr, 0, size - 1);

	system("pause");
	return 0;
}