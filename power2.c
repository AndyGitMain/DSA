#include <stdio.h>

double power(const double base, const int exp)
{
	if (base == 0)
		return -1;
	else if (exp == 0)
		return 1.0;
	else if (exp == 1)
		return base;
	else {
		if (exp % 2 == 0)
			return power(base, exp / 2) * power(base, exp / 2);
		else
			return base * power(base, exp / 2) * power(base, exp / 2);
	}
}

int main(void)
{
	printf("%f\n", power(2.0, 0));
	printf("%f\n", power(2.0, 1));
	printf("%f\n", power(2.0, 2));
	printf("%f\n", power(2.0, 3));
	printf("%f\n", power(2.0, 4));
	printf("%f\n", power(2.0, 5));
	return 0;
}



