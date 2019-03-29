#include<stdio.h>
#include<windows.h>
int Find(int *arr, int sz, int num1, int num2)
{
	int i = 0;
	int tmp = arr[0];
	for (i = 0; i <= sz; i++)
	{
		tmp ^= arr[i];
	}
	int j = 0;
	for (j = 0; j < 32; j++)
	{
		if (tmp & 1 != 1)
		{
			tmp >>= 1; 
		}
	}
	int qqq;
	for (i = 0; i <= sz; i++)
	{
		if (arr[i] >> j == 1)
		{
			qqq = arr[i] ^ tmp;
			num1=qqq
		}
		else
		{
			num2=
		}
	}


	return ;
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 7 };
	int sz = sizeof(arr) / sizeof(arr[0])-1;
	int num1;
	int num2;
	int ret = Find(arr, sz,num1,num2);
	printf("%d %d",num1,num2);
	system("pause");
	return 0;

}
//#include<stdio.h>
//#include<windows.h>
//void Soring(int *arr, int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i <= sz-1; i++)
//	{
//		for (j = 0; j <= sz - i-1; j++)
//		{
//			if (arr[j] >arr[j + 1])
//			{
//				int tmp;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//
//}
//void Find(int *arr, int sz)
//{
//	Soring (arr, sz);
//	int i = 0;
//	while (i<sz)
//	{
//		if (arr[i] != arr[i + 1])
//		{
//			printf("%d\n", arr[i]);
//			i++;
//		}
//		else
//			i=i+2;
//	}
//	return ;
//}
//
//int main()
//{
//	int i = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 7 };
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	Soring(arr, sz);
//	Find(arr, sz);
//	//for (i = 0; i <= sz; i++){
//	//	printf("%d\n", arr[i]);
//	//}
//	system("pause");
//	return 0;
//
//}
//
//
//#include <stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int money = 20;
//	int total = money;
//	int empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("ƒ„ø…“‘∫» %d ∆ø“˚¡œ\n", total);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#include<windows.h>
//#include<assert.h>
//void My_strcopy(char *arr2, const char *arr1)
//{
//	assert(arr1&&arr2);
//	while (*arr2++=*arr1++)
//	{
//		;
//
//	}
//}
//int main()
//{
//	char arr1[20] = "abcd";
//	char arr2[20];
//	int s = strlen(arr1);
//	int i = 0;
//	My_strcopy(arr2, arr1);
//	for (i = 0; i <s ; i++)
//	{
//		printf("%c",arr2[i]);
//	}
//
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#include<windows.h>
//#include<assert.h>
//void My_strcat(char *arr1, const char *arr2)
//{
//	assert(arr1&&arr2);
//	while (*arr1 != '\0')
//	{
//		arr1++;
//
//	}
//	while (*arr1++=*arr2++)
//	{
//		;
//
//	}
//}
//int main()
//{
//	char arr1[20] = "abcd";
//	char arr2[20]="ef";
//	int s = strlen(arr1) + strlen(arr2);
//	int i = 0;
//	My_strcat(arr1, arr2);
//	for (i = 0; i <s ; i++)
//	{
//		printf("%c",arr1[i]);
//	}
//
//	system("pause");
//	return 0;
//}
//
