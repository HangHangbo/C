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
////		if (*cur==*ret)  //�жϵ�һ���ַ��Ƿ���ͬ����ͬ����ѭ������ͬstr++������cur ���±Ƚ�
////		{
////			while (*cur&&*ret) // �ж�cur��ÿһ���ַ���
////			{
////				if (*cur != *ret)
////					break;
////				cur++;
////				ret++;
////			}
////			if (*ret == '\0')   //ƥ��ɹ����ش�ʱ��cur��str�е���ʼλ��
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
//		//�Ƚ����˸����ٽ�����++������ֵ���ս����\0��ʱ��������while���ж��������˳�ѭ��
//		//����ʱ�Ѿ������е����ݸ����Ƶ��ַ���������
//	{
//		;
//	}
//	return ret;
//}

int main()
{
	char a[10];//��������㹻��Ŀռ䣬ʹ���ܽ��ַ���ȫ����
	char *q = "bcd";
	printf("%s\n", Strcpy(a, q));
	system("pause");
	return 0;

}