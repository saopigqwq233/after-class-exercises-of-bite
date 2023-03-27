//#include"stdio.h"
//#include"assert.h"
//#include"string.h"
//#include"stdlib.h"
//void* my_memcpy(void* dest, const void* src, size_t n);
////从src里面赋值n个字节到dest
//int main()
//{
//	char src[] = "Hello World!Good Morning.";
//	printf("原字符串：%s\n", src);
//	printf("拷贝4个字节到目标\n");
//	char dest1[5] = { '\0','\0','\0','\0','\0'};//库函数目标字符串
//	char dest2[5] = { '\0','\0','\0','\0','\0'};//模拟函数字符串
//
//	printf("库函数效果:\n");
//	memcpy(dest1, src, 4);
//	printf("%s\n", dest1);
//
//	printf("模拟函数效果:\n");
//	my_memcpy(dest2, src, 4);
//	printf("%s\n", dest2);
//	return 0;
//}
//void* my_memcpy(void* dest, const void* src, size_t n)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (n--)//拷贝n个字节
//	{
//		*(char*)dest = *(char*)src;//拷贝一个字节
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}