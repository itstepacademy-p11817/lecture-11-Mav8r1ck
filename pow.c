#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	double x;
	double y;
	printf("Enter number:\n");
	scanf_s("%lf", &x);
	printf("Enter degree:\n");
	scanf_s("%lf", &y);
	printf("%lf\n", pow(x, y));
	system("pause");
	return 0;
}