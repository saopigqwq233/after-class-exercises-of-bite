//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//char* my_strcpy(char* dest,const char* src);//��src�����ݸ��Ƶ�dest
////����Ŀ�긴�Ƴɹ����ַ���
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
//	while (*src!='\0')//����src��\0����ѭ������ζ�Ÿ����˾����ַ��⣬û��\0��β
//	{
//		*p++ = *src++;
//	}
//	*p = '\0';//ΪĿ���ַ������һ��������־
//	return dest;
//}