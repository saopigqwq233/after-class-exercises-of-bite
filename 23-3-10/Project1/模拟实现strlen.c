//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//int my_strlen1(const char*);//����������������
//int my_strlen2(const char*);//�ݹ鷨����������
//int my_strlen3(const char*);//ָ��-ָ�뷨
//int main()
//{
//	char str[] = { "Hello World!" };
//	int length = strlen(str);//C���Կ⺯����������ַ�������
//	if (length == my_strlen1(str))
//		printf("������\n");
//	if (length == my_strlen2(str))
//		printf("�ݹ鷨\n");
//	if (length == my_strlen3(str))
//		printf("ָ��-ָ�뷨\n");
//	return 0;
//}
//
//int my_strlen1(const char* str)
//{
//	assert(str);
//	int ret = 0;
//	while (*str != '\0')
//	{
//		str++;
//		ret++;//ÿ������һ���ַ���Ϊ'\0'��ret��+1
//	}
//	return ret;
//}
//int my_strlen2(const char*str)
//{
//	assert(str);
//	if (*str != '\0')//strָ����ַ���Ϊ'\0'
//		return 1 + my_strlen2(str + 1);
//	else//strָ����ַ�Ϊ'\0'
//		return 0;
//}
//int my_strlen3(const char* str)
//{
//	assert(str);
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')//endָ��ָ��\0ʱ����
//	{
//		end++;
//	}
//	return end - start ;
//}