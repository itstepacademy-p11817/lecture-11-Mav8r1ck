#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	int b = 0;
	printf("Enter number:\n");
	scanf_s("%d", &a);
	for (a; a <= 500; a++)
	{
		b += a;
	}
	printf("%d\n", b);
	system("pause");
	return 0;
}