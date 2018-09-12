#include <stdio.h>
#include <stdlib.h>

void mergeTwoArea(int arr[], int left, int mid, int right)
{
	int fIdx = left;
	int rIdx = mid + 1;
	int sIdx = 0;
	int *sortArr = (int *)malloc(sizeof(int) * (right - left + 1));

	while (fIdx <= mid && rIdx <= right) {
		if (arr[fIdx] < arr[rIdx])
			sortArr[sIdx] = arr[fIdx++];
		else
			sortArr[sIdx] = arr[rIdx++];
		sIdx++;
	}

	if (fIdx > mid) {
		for (int i = rIdx; i <= right; i++, sIdx++)
			sortArr[sIdx] = arr[i];
	} else {
		for (int i = rIdx; i <= mid; i++, sIdx++)
			sortArr[sIdx] = arr[i];
	}

	for (int i = left, j = 0; i < right; i++, j++)
		arr[i] = sortArr[j];

	free(sortArr);
}

void mergeSort(int arr[], int left, int right)
{
	int mid = 0;
	if (left < right) {
		mid = (left + right) / 2;

		mergeSort(arr, left, mid);
		mergeSort(arr, mid + 1, right);

		mergeTwoArea(arr, left, mid, right);
	}
}

void displayArray(int arr[], int size)
{
	printf("Index = ");
	for (int i = 0; i < size; i++)
		printf("%d ", i);
	printf("\n");
	printf("        ");
	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main(void)
{
	int arr[9] = { 6, 7, 5, 1, 9, 4, 3, 2, 8 };

	displayArray(arr, sizeof(arr) / sizeof(int));
	mergeSort(arr, 0, (sizeof(arr) / sizeof(int)) - 1);
	displayArray(arr, sizeof(arr) / sizeof(int));	
	return 0;
}




