#include<stdio.h>
int main()
{
	int a, b;
	for (int a = 1; a <= 9; a++)
	{
		printf("%3d ", a);
	}
	printf("\n");
	for (int a = 2; a <= 9; a++)
	{

		for (int b = 1; b <= a; b++)
		{

			printf("%3d ", a*b);
		}
		printf("\n");

	}
	getchar();
	return 0;
}