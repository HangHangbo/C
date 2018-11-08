//#include<stdio.h>
//int main()
//{
//	int a, b, c, t;
//	printf("输入三个整数：\n");
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
//	printf("这三个数中的最大值为:%d\n", c);
//	printf("将这三个数从大到小的顺序排列为：%d\t%d\t%d\n", c, b, a);
//	return 0;
#include <stdio.h>
int a, b, temp;
int Division(){
	printf("请输入两个数(a,b)：\n");
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
	printf("最大公约数为：%d\n", b);
	return 0;
}
