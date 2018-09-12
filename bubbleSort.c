#include <stdio.h>

void bubbleSort(int arr[], int size)
{
	int tmp = 0;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < (size - i) - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
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

	displayArray(arr, sizeof(arr)/sizeof(int));
	bubbleSort(arr, sizeof(arr)/sizeof(int));
	displayArray(arr, sizeof(arr)/sizeof(int));
	return 0;
}




