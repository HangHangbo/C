//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	int a = 10;//�����ڴ��п���һ��ռ�
//	int *p = &a;//�������ǶԱ���a��ȡ�����ĵ�ַ������ʹ��&������.
//	//��a�ĵ�ַ�����p�����У�p����һ��ָ�������
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
//	*pc = 0x55;//�ص��ڵ��ԵĹ��̹۲��ڴ�ı仯
//	*pi = 0;//�ص��ڵ��ԵĹ��̹۲��ڴ�ı仯
//	return 0;
//}
//
#include<stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int *p = arr;//��������Ԫ�ص�ַ����ָ��
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;;
	for (; i < sz; i++)
	{
		printf("%2d",*(p+i));
	}
	system("pause");
	return 0;
}