//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//char* my_strcpy(char* dest,const char* src);//将src的内容复制到dest
////返回目标复制成功的字符串
//int main()
//{
//	char target[20] = "haha";
//	char src[] = "Hello Wolrd!";
//	printf("%s", my_strcpy(target, src));
//	return 0;
//}
//char* my_strcpy( char* dest, const char* src)
//{
//	assert(dest && src);
//	char* p = dest;
//	while (*src!='\0')//遇到src的\0结束循环，意味着复制了具体字符外，没有\0结尾
//	{
//		*p++ = *src++;
//	}
//	*p = '\0';//为目标字符串添加一个结束标志
//	return dest;
//}