//#include"stdio.h"
//#include"assert.h"
//#include"string.h"
//#include"stdlib.h"
//void* my_memcpy(void* dest, const void* src, size_t n);
////��src���渳ֵn���ֽڵ�dest
//int main()
//{
//	char src[] = "Hello World!Good Morning.";
//	printf("ԭ�ַ�����%s\n", src);
//	printf("����4���ֽڵ�Ŀ��\n");
//	char dest1[5] = { '\0','\0','\0','\0','\0'};//�⺯��Ŀ���ַ���
//	char dest2[5] = { '\0','\0','\0','\0','\0'};//ģ�⺯���ַ���
//
//	printf("�⺯��Ч��:\n");
//	memcpy(dest1, src, 4);
//	printf("%s\n", dest1);
//
//	printf("ģ�⺯��Ч��:\n");
//	my_memcpy(dest2, src, 4);
//	printf("%s\n", dest2);
//	return 0;
//}
//void* my_memcpy(void* dest, const void* src, size_t n)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (n--)//����n���ֽ�
//	{
//		*(char*)dest = *(char*)src;//����һ���ֽ�
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}