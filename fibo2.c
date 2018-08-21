#include <stdio.h>

int fibo(const unsigned int n)
{
	int sum = 0;
	int f1 = 0, f2 = 1;
	int i = 0;

	if (n == 0)
		return f1;
	else if (n == 1)
		return f2;
	else {
		for (i = 2; i <= n; i++) {
			sum = f1 + f2;
			f1 = f2;
			f2 = sum;
		}
	}
	return sum;
}

int main(void)
{
	const int n = 10;
	
	for (int i = 0; i < n; i++)
		printf("%d ", fibo(i));
	printf("\n");
	return 0;
}


