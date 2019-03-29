#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
#include<windows.h>
#include<string.h>
//void Getmemory(char **p)
//{
//	p = (char *)malloc(100);
//	if (p != NULL)
//	{
//		exit(EXIT_FAILURE);
//	}
//}
//void Test(void)
//{
//	char *str = NULL;
//	Getmemory(&str);
//	strcpy(str, "hello world");
//	printf("%s\n",str);
//}
//int main()
//{
//	Test();
//	system("pause");
//	return 0;
//}
struct A{
	int num;
	int mem[0];
};
int main()
{
	int n;
	printf("struct array:");
	scanf("%d", &n);
	struct A *a = (struct A *)malloc(sizeof(struct A)+sizeof(int)*n);
	a->num = n;
	int i = 0;
	for (; i < n; i++)
	{
		a->mem[i] = i;
	}
	printf("%d\n", sizeof(a));
	system("pause");
	return 0;
}