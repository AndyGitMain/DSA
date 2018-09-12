#include <stdio.h>

void selectionSort(int arr[], int size)
{
	int tmp = 0;
	int minIdx = 0;
	for (int i = 0; i < size; i++) {
		minIdx = i;
		for (int j = i + 1; j < size; j++) {
			if (arr[minIdx] > arr[j]) {
				minIdx = j;
			}
		}
		tmp = arr[i];
		arr[i] = arr[minIdx];
		arr[minIdx] = tmp;
	}
}

void displayArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main(void)
{
	int arr[10] = { 6, 10, 7, 5, 1, 9, 4, 3, 2, 8 };

	displayArray(arr, sizeof(arr) / sizeof(int));
	selectionSort(arr, sizeof(arr) / sizeof(int));
    displayArray(arr, sizeof(arr) / sizeof(int));	
	return 0;
}

