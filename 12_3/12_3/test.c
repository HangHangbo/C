#include<stdio.h>
#include<windows.h>
int cmp(const void* n1, const void *n2)
{
	return *(char *)n1 - *(char*)n2;
}
void swap(char *num1,char *num2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *num1;
		*num1 = *num2;
		*num2 = tmp;
		num1++, num2++;
	}
}
void My_qsort(void *str, int sz, int width, int(*cmp)(const void* n1, const void *n2))
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz; i++)
	{
		for (j = 0; j <sz- i - 1; j++)
		{
			int ret = cmp(((char*)str + (j*width)), ((char*)str + (j + 1)*width));
			if (ret>0)
			{
				swap(((char*)str + (j*width)), ((char*)str + (j + 1)*width), width);
			}
		}
	}
}
int main()
{
	int arr1[] = { 5, 7, 8, 4, 6, 1, 9 };
	char arr2[] = { 'z', 'l', 's', 'x', 'm' };
	int i = 0;
	My_qsort(arr1,sizeof(arr1) / sizeof(arr1[0]), sizeof(arr1[0]), cmp);
	for (i = 0;i <(sizeof(arr1) / sizeof(arr1[0]));i++)
	{
		printf("%d", arr1[i]);
	}
	printf("\n");
	My_qsort(arr2, sizeof(arr2)/ sizeof(arr2[0]), sizeof(arr1[0]), cmp);
	for (i = 0; i <(sizeof(arr2)/sizeof(arr2[0]));i++)
	{
		printf("%c", arr2[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}