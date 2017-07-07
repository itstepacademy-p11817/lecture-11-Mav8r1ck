#include <stdio.h>
#include <stdlib.h>

int main()
{
	unsigned a;
	unsigned b=1;
	printf("Enter number:\n");
	scanf_s("%u", &a);
	for (a; a>=1&&a <= 20; a++) 
	{
		b *= a;
	}
	printf("%u\n", b);
	system("pause");
	return 0;
}