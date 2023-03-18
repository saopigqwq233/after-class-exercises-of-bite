//#include<stdio.h>
//#include<assert.h>
//int my_strcmp(const char* str1, const char* str2);//比较str1和str2大小，
//int main()
//{
//	char str1[] = "Hello World!";
//	char str2[] = "Hello World!";
//	char str3[] = "Hello Bite!";
//	//str1和str2相等
//	//str1中的W大于str2中的B
//	printf("str1:%s\nstr2:%s\nstr3:%s\n",str1,str2,str3);
//	if (my_strcmp(str1, str2) == 0)
//		printf("str1和str2相等\n");
//	int cmp = my_strcmp(str1, str3);
//	if (cmp == 0)
//		printf("str1和str3相等\n");
//	else if (cmp > 0)
//		printf("str1大于str3\n");
//	else
//		printf("str1小于str3\n");
//	return 0;
//}
//int my_strcmp(const char* str1, const char* str2)
//{
//	//遍历两个字符串，比较字符
//	//遇到不一样的字符时停止，返回ascii差值
//	//str1的字符比str2字符大，返回正数
//	//当某个字符串遍历到结束标志，返回*str1-*str2
//	//两个字符串同时遍历到结束标志，说明两个字符串相等，返回0
//	assert(str1 && str2);
//	while (*str1 != '\0' && *str2 != '\0')
//	{
//		if (*str1 != *str2)
//		{
//			return *str1 - *str2;
//		}
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}