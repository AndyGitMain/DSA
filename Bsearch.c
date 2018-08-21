#include <stdio.h>

int Bsearch(const int arr[], const int target, const int size)
{
	int first = 0;
	int last = size - 1;
	int mid = 0;

	while (first <= last) {
		mid = (first + last) / 2;
		if (target == arr[mid])
			return mid;
	    else {
			if (target < arr[mid])
				last = mid - 1;
			else
				first = mid + 1;
		}
	}
	return -1;
}

int main(void)
{
	int arr[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };

	printf("40 : %d\n", Bsearch(arr, 40, sizeof(arr) / sizeof(int)));
	printf("20 : %d\n", Bsearch(arr, 20, sizeof(arr) / sizeof(int)));
	printf("90 : %d\n", Bsearch(arr, 90, sizeof(arr) / sizeof(int)));
	printf("70 : %d\n", Bsearch(arr, 70, sizeof(arr) / sizeof(int)));
	printf("50 : %d\n", Bsearch(arr, 50, sizeof(arr) / sizeof(int)));
	return 0;
}


