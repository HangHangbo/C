
#include <stdio.h>
#include<string.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int key = 7;
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	while (left <= right)
	{
		int mid = left + (left + right) / 2;
		if (key > arr[mid])
		{
			left = mid+1;
		}
		else if (key < arr[mid])
		{
			right = mid-1;
		}
		else if (key = arr[mid])
		{
			printf("�ҵ���%\n", mid);
			break;
		}
	}
	if (left>right)
	{
		printf("�Ҳ���");
	}
	return 0;
}