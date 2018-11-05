//#include<stdio.h>
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i;
//		printf("%d", arr[i]);
//
//	}
//}
//void empty(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//		printf("%d", arr[i]);
//
//	}
//}
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int tmp = 0;
//	while (left < right)
//	{
//		tmp = arr[right];
//		arr[right] = arr[left];
//		arr[left] = tmp;
//		left++;
//		right--;
//	}
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//
//	}
//}
//int main()
//{
//	int arr[10] = { 0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	init(arr, sz);
//	printf("\n");
//	reverse(arr, sz);
//	printf("\n");
//	empty(arr, sz);
//	printf("\n");
//	system("pause");
//	return 0;
//
//}
//#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void print(int a)
//{
//	if (a > 9)
//		print(a / 10);
//	printf("%d  ", a % 10);
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print(a);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//int my_strlen(char *str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "abcdf";
//	printf("%d\n", my_strlen(arr));
//	system("pause");
//	return 0;
//}
#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int fac(int n)
{
	int a = 1;
	int b = 3;
	int c = 0;
	int i = 0;
	if (n < 2)
		return 1;
	else
	{
		for (i = 0; i < n+1;i++)
		{
			c = a*b;
			a = b;
			b = c;
	}
		return c;
}
	int main()
	{
		int n = 0;
		scanf("%d", &n);
		printf("%d", fac(n));
		system("pause");
		return 0;
	}