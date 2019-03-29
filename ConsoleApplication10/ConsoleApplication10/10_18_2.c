#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int my_prime(int n)
{
	int i = 0;
	for (i = 2; i < n; i++)
	{
		if (n%i != 0)
		{
			return 0;
			break;
		}
		return 1;
	}
}
int main()
{
	int num = 0;
	int i = 0;
	printf("输入一个数：");
	scanf("%d", &num);
	i = my_prime(num);
	if (i == 1)
	{
		printf("%d不是素数\n",num);
	}
	else
	{
		printf("%d是个素数\n", num);
	}/*for (i = 2; i < num; i++)
	{
		if (num%i != 0)
		{

			printf("%d不是素数\n", num);
			break;
		}
	
		}*/
	system("pause");
	return 0;
}