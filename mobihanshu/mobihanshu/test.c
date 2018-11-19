#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<windows.h>
int my_strcmp(const char *str1, const char *str2)
{
	assert(str1);
	assert(str2);
	int ret = 0;
	while (!(ret = (const unsigned char)*str1 - (const unsigned char)*str2) && *str1)
	{
		*str1++, *str2++;
	}
	if (ret > 1)
		return 1;
	else if (ret < 1)
		return -1;
	else
		return 0;
}
	//while (*str1&&*str2)
	//{
	//	if (*str1 > *str2)
	//	{
	//		return 1;
	//	}
	//	else if (*str1 < *str2)
	//	{
	//		return -1;
	//	}
	//	else
	//	{
	//	}
	//	str1++, str2++;
	//}
	//if (*str1>*str2)
	//{
	//	return -1;
	//}
	//else if (*str1 < *str2)
	//{
	//	return 1;
	//}
	//else
	//{
	//	return 0;
	//}
//}
//
//int main()
//{
//	char *str1 = "abcd123Abc";
//    char *str2 ;
//	int ret = my_strcmp(str1, str2);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//void *my_memcpy(void *dst, const void *src, int num)
//{
//	assert(dst);
//	assert(src);
//	char *dst_ = (char*)dst;
//	const char*src_ = (const char *)src;
//	while (num)
//	{
//		*dst_ = *src_;
//		src_++, dst_++;
//		num--;
//	}
//	return dst;
//}
//char * my_strstr(const char*str1, const char*str2)
//{
//	assert(str1);
//	assert(str2);
//	char *cp = (char*)str1;
//	char *sub = (char*)str2;
//	char *s1 = NULL;
//	if (*str2 == '\0')
//		return NULL;
//	while (*cp)
//	{
//		s1 = cp;
//		sub = str2;
//		while (*s1 &&*sub && (*s1 == *sub))
//		{
//			s1++, sub++;
//		}
//		if (*sub == '\0')
//			return cp;
//		cp++;
//	}
//	
//}
//char *my_strchr(const char *str, char b)
//{
//	assert(str);
//	assert(b);
//	char *s = NULL;
//	while (*str)
//	{
//		if (*str == b)
//		{
//			return (char *)str;
//		}
//		*str++;
//	}
//	return NULL;
//}
void *my_memmove(char *dst,const char *src, int num)
{
	assert(dst);
	assert(src);
	if (src < dst && dst < src +num)
	{
		char *dst_ = (char*)dst + num - 1;
		const char *src_ = (const char*)src + num - 1;
		while (num)
		{
			*dst_ =* src_;
			dst_--, src_--;
			num--;
		}
	}
	else
	{
		char *dst_ = (char*)dst;
		const char*src_ = (const char *)src;
		while (num)
		{
			*dst_ = *src_;
			src_++, dst_++;
			num--;
		}
	}
	return dst;
}
int main()
{
	char a[32] = "abcdef123456";
	char b[32] ="abcdef123456";
	my_memmove(a+1,a ,strlen(a)+1 );
	printf("%s\n",a);
	system("pause");
	return 0;
}