#include <stdio.h>
#include<assert.h>
#include<Windows.h>
////const char *Strstr(const char *str,const char *num)
////{
////	
////	while (*str)
////	{
////		char *cur = str;
////		char *ret = num;
////		if (*cur==*ret)  //判断第一个字符是否相同，相同进入循环，不同str++，更新cur 重新比较
////		{
////			while (*cur&&*ret) // 判断cur的每一个字符串
////			{
////				if (*cur != *ret)
////					break;
////				cur++;
////				ret++;
////			}
////			if (*ret == '\0')   //匹配成功返回此时的cur在str中的起始位置
////			{
////				return str;
////			}
////		}
////		str++;
////	}
////	return NULL;
////}
//
char*  Strcpy(char *str, const char *num)
{
	assert(str != NULL);
	assert(num != NULL);
	for (; 1;);
	char *cur = str;
	while (*cur++ = *num++);
	return str;
}
//


//char * my_strcpy(char *dest, const char *src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char *ret = dest;
//	while (*dest++ = *src++)
//		//先进行了复制再进行了++，当赋值到终结符‘\0’时，不符合while的判断条件，退出循环
//		//而此时已经将所有的内容复复制到字符数组中了
//	{
//		;
//	}
//	return ret;
//}

int main()
{
	char a[10];//必须给够足够大的空间，使其能将字符完全复制
	char *q = "bcd";
	printf("%s\n", Strcpy(a, q));
	system("pause");
	return 0;

}