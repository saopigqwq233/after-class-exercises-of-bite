//#include<stdio.h>
//#include<assert.h>
//int my_strcmp(const char* str1, const char* str2);//�Ƚ�str1��str2��С��
//int main()
//{
//	char str1[] = "Hello World!";
//	char str2[] = "Hello World!";
//	char str3[] = "Hello Bite!";
//	//str1��str2���
//	//str1�е�W����str2�е�B
//	printf("str1:%s\nstr2:%s\nstr3:%s\n",str1,str2,str3);
//	if (my_strcmp(str1, str2) == 0)
//		printf("str1��str2���\n");
//	int cmp = my_strcmp(str1, str3);
//	if (cmp == 0)
//		printf("str1��str3���\n");
//	else if (cmp > 0)
//		printf("str1����str3\n");
//	else
//		printf("str1С��str3\n");
//	return 0;
//}
//int my_strcmp(const char* str1, const char* str2)
//{
//	//���������ַ������Ƚ��ַ�
//	//������һ�����ַ�ʱֹͣ������ascii��ֵ
//	//str1���ַ���str2�ַ��󣬷�������
//	//��ĳ���ַ���������������־������*str1-*str2
//	//�����ַ���ͬʱ������������־��˵�������ַ�����ȣ�����0
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