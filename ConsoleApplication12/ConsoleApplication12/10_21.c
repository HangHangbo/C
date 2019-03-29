//#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int Power(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	else
//		return n*Power(n, k - 1);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	int ret = 0;
//	scanf("%d%d", &n, &k);
//	ret = Power(n, k);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}
//#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int DigitSum(int n)
//{
//	if (n < 10)
//		return n;
//	else
//		return n % 10 + DigitSum(n / 10);
//}
//
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	sum = DigitSum(n);
//	printf("%d", sum);
//	system("pause");
//	return 0;
//}
#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void  reverse_string(char arr[])
{
	int sz = strlen(arr);
	char tmp = arr[0];
	arr[0] = arr[0];
	arr[sz - 1] = '\0';
	reverse_string(arr + 1);
	arr[sz - 1] = tmp;
	

}

int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s\n", arr);
	system("pause");
	return 0;

}