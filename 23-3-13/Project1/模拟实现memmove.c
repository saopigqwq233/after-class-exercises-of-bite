#include"stdio.h"
#include"stdlib.h"
#include"string.h"
#include"assert.h"
void* my_memmove(void* dest, const void* src, size_t n);
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("ԭ���飺\n");
	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("����32���ֽ�(8����������)��Ŀ������\n");

	printf("�⺯��Ч����\n");
	int dest1[8] = { 0 };
	memmove(dest1, arr, 32);
	for (int i = 0; i < (32 / sizeof(int)); i++)
	{
		printf("%d ", dest1[i]);
	}
	printf("\n");

	printf("ģ�⺯��Ч��:\n");
	int dest2[8] = { 0 };
	my_memmove(dest2, arr, 32);
	for (int i = 0; i < (32 / sizeof(int)); i++)
	{
		printf("%d ", dest2[i]);
	}
	printf("\n");

	return 0;
}
void* my_memmove(void* dest, const void* src, size_t n)
{
	char* d = (char*)dest;//��destת��δchar*��
	const char* s = (const char*)src;
	if (d <= s)//ǰ-����ֱ�Ӱ���memcpy��
	{
		while (n--)
		{
			*d++ = *s++;//���ֽڸ���
		}
	}
	else//��-��ǰ��Ŀ��������Դ����֮ǰ
	{
		//�Ƚ�ָ���Ƶ�ĩβ
		d += n;
		s += n;
		while (n--)
		{
			*--d = *--s;//��n-1��λ�ø��Ƶ�0
		}
	}
	return dest;
}