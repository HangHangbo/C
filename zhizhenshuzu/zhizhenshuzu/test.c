//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	int a = 10;//现在内存中开辟一块空间
//	int *p = &a;//这里我们对变量a，取出它的地址，可以使用&操作符.
//	//将a的地址存放在p变量中，p就是一个指针变量。
//	printf("%p\n", p);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	int a = 0;
//	int *q = a;
//	printf("%d\n", sizeof(*q));
//	system("pause");
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int n = 10;
//	char *pc = (char*)&n;
//	int *pi = &n;
//	printf("%p\n",&n);
//	printf("%p\n",pc );
//	printf("%p\n",pc+1 );
//	printf("%p\n",pi );
//	printf("%p\n",pi+1 );
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0x11223344;
//	char *pc = (char *)&n;
//	char *pi = &n;
//	*pc = 0x55;//重点在调试的过程观察内存的变化
//	*pi = 0;//重点在调试的过程观察内存的变化
//	return 0;
//}
//
#include<stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int *p = arr;//将数组首元素地址存入指针
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;;
	for (; i < sz; i++)
	{
		printf("%2d",*(p+i));
	}
	system("pause");
	return 0;
}