#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int fac(int n)
//{
//	int c = 1;
//	for (; n > 0; n--)
//		c = c*n;
//	return c;
//}
//	int main()
//	{
//		int n = 0;
//		scanf("%d", &n);
//		printf("%d", fac(n));
//		system("pause");
//		return 0;
//	}
//#include<stdio.h>
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	int i = 0;
//	if (n <= 2)
//		return 1;
//	else
//	for (i = 0; i < n - 2; i++)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", fib(n));
//	system("pause");
//	return 0;
//}
#include<stdio.h>
int Pow(int n, int k)
{
	if (k == 0)
		return 1;
	else
		return n*Pow(n, k - 1);
}

int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", n, k);
	printf("%d", Pow(n,k));
	system("pause");
	return 0;

}