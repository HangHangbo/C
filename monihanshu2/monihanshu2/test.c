

//#include<stdio.h>
//#include<windows.h>
//#include<assert.h>
//#include<stdlib.h>
//char *my_strncpy(char *dest, char* src, int n)
//{
//	assert(src);
//	assert(dest);
//	assert(n > 0);
//	while (n&&*src)
//	{
//		*dest++ = *src++;
//		n--;
//	}
//	return dest;
//}
//int main()
//{
//	char str1[] = "ljjloveljj";//指针数组
//	char str2[] = "dwh";
//	int n = strlen(str2) + 1;
//	my_strncpy(str1, str2, n);//n为str2的字符串长度(dwhloveljj),当n<10（传的参数），也是一样的输出
//	printf("%s", str1);
//	system("pause");
//	return 0;
//
//}

//#include<stdio.h>
//#include<windows.h>
//#include<assert.h>
//#include<stdlib.h>
////#include<string.h>
//#pragma warning(disable:4996)
//char *my_strncat(char *dest, char* src, int n)
//{
//	assert(src);
//	assert(dest);
//	assert(n > 0);
//	while (*dest)
//	{
//		dest++;
//	}
//	while (n&&*src)
//	{
//		*dest++ = *src++;
//		n--;
//	}
//	return dest;
//}
//int main()
//{
//	char str1[32] = "ljjlove";
//	char str2[] = "dwh";
//	int n = strlen(str2);
//	my_strncat(str1, str2, n);
//	printf("%s", str1);
//	system("pause");
//	return 0;
//}
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#pragma warning(disable:4996)
int my_strncmp(const char* dest, const char* src, int n)
{
	assert(dest);
	assert(src);
	int ret = 0;
	int res = 0;
	while (n && !(ret = *(unsigned char*)dest - *(unsigned char*)src) && *dest)
	{
		src++;
		dest++;
		n--;
	}
	if (ret > 0)
	{
		res = 1;
	}
	else if (ret < 0)
	{
		res = -1;
	}
	else{
		res = 0;
	}
	return res;
}
int main()
{
	char *str1 = "123456789";
	char *str2 = "12abcde";
	//int n;
	//printf("please enter n:\n");
	//scanf_s("%d\n", &n);
	int ret = my_strncmp(str1, str2, 2);
	printf("%d\n", strncmp(str1, str2, 4));
	printf("%d", ret);
	system("pause");
	return 0;
}

