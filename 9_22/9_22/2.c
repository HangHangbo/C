//#include<stdio.h>
//int main()
//{
//	int a, b, c, t;
//	printf("��������������\n");
//	scanf_s("%d\t%d\t%d", &a, &b, &c);
//	if (a > b)
//	{
//		t = a;
//		a = b;
//		b = c;
//	}
//	if (a > c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b > c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	printf("���������е����ֵΪ:%d\n", c);
//	printf("�����������Ӵ�С��˳������Ϊ��%d\t%d\t%d\n", c, b, a);
//	return 0;
#include <stdio.h>
int a, b, temp;
int Division(){
	printf("������������(a,b)��\n");
	scanf_s("%d,%d", &a, &b);
	if (a < b){
		temp = a;
		a = b;
		b = temp;

	}
	while (a%b != 0){
		temp = a%b;
		a = b;
		b = temp;
	}
	printf("���Լ��Ϊ��%d\n", b);
	return 0;
}
