//#include<stdio.h>
//#include<windows.h>
//#include<assert.h>
//void chage(char *start, char *end)
//{
//	while (start < end)
//	{
//		*start ^= *end;
//		*end ^= *start;
//		*start ^= *end;
//		start++;
//		end--;
//	}
//
//}
//void chagestring(char a[])
//{
//	assert(a);
//	char *q = a;
//	char *qb = q;
//	while (*q)
//	{
//		if (*q == ' ')
//		{
//			chage(qb, q-1);
//			q++;
//			qb=q;
//			continue;
//		}
//		q++;
//	}
//	chage(qb, q - 1);
//	chage(a, q - 1);
//}
//
//int main()
//{
//	char a[] = "student am i";
//	printf("befor:%s\n", a);
//	chagestring(a);
//	printf("after:%s\n", a);
//	system("pause");
//	return 0;
//}