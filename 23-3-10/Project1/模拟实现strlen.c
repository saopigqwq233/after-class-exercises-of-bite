//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//int my_strlen1(const char*);//计数法，返回整型
//int my_strlen2(const char*);//递归法，返回整形
//int my_strlen3(const char*);//指针-指针法
//int main()
//{
//	char str[] = { "Hello World!" };
//	int length = strlen(str);//C语言库函数算出来的字符串长度
//	if (length == my_strlen1(str))
//		printf("计数法\n");
//	if (length == my_strlen2(str))
//		printf("递归法\n");
//	if (length == my_strlen3(str))
//		printf("指针-指针法\n");
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
//		ret++;//每次遇到一个字符不为'\0'，ret就+1
//	}
//	return ret;
//}
//int my_strlen2(const char*str)
//{
//	assert(str);
//	if (*str != '\0')//str指向的字符不为'\0'
//		return 1 + my_strlen2(str + 1);
//	else//str指向的字符为'\0'
//		return 0;
//}
//int my_strlen3(const char* str)
//{
//	assert(str);
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')//end指针指向\0时结束
//	{
//		end++;
//	}
//	return end - start ;
//}