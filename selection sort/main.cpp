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

int main(){  // selection sort 시간 복잡도 : O(n^2)
	int n, min, index;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++){
		min = INT_MAX;
		for (int j = i; j < n; j++){
			if (min > arr[j]){
				min = arr[j];
				index = j;
			}
		}
		swap(&arr[i], &arr[index]);
	}

	for (int i = 0; i < n; i++)
		printf("%d", arr[i]);

	system("pause");
	return 0;
}