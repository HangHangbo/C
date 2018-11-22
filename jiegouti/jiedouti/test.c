#include<stdio.h>
struct stu
{
	char name[20];
	int age;
	char sex[5];
	char id[20];
};
struct S
{
	int date[1000];
	int num;
};
void print1(struct S s)
{
	printf("%d\n", s.num);
}
void print2(struct S *ps)
{
	printf("%d\n",ps->num);
}
struct A
{
	int _a : 2;
	int _b : 5;
	int _c : 10;
	int _d : 30;
};
enum Day
{
	Mon,
	Tues,
	Wed,
	Thur,
	Fri,
	Sat,
	Sun

};
enum Sex{
	Male,
	Female,
	scret
};
enum Color{
	RED,
	BLUE,
	GREEN,
};
union un
{
	char c[5];
	int i;
}x;
int main()
{
 // /*  x.i = 1;
	//printf("%d\n", x.c);*/ 
	///*union un un;
	//printf("%d\n", sizeof(un));
	//printf("%d\n",&(un.i));
	//printf("%d\n", &(un.c));
	//un.i = 0x11223344;
	//un.c = 0x55;
	//printf("%x\n", un.i);*/
	/*enum color c = RED;
	printf("%d\n",c);*/
	//printf("%d\n", sizeof(struct A)); 
	/*struct S s = { {1,2,3,4},1000 };
	print1(s);
	print2(&s);*/
	/*struct stu a = { "zhangsan", 10, "man", 123 };
	printf("%s\n", a.name);
	printf("%d\n", a.age);
	printf("%s\n", a.sex);
	printf("%d\n", a.id);*/
	system("pause");
	return 0;
}