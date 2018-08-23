#include <stdio.h>

int power(const int base, const int exp)
{
	if (base == 0)
		return -1;
	else if (exp == 0)
		return 1;
	else if (exp == 1)
		return base;
	else {
		return base * power(base, exp - 1);
	}
}

int main(void)
{
	printf("%d\n", power(2, 0));
	printf("%d\n", power(2, 1));
	printf("%d\n", power(2, 2));
	printf("%d\n", power(2, 3));
	printf("%d\n", power(2, 4));
	printf("%d\n", power(2, 5));
	return 0;
}



