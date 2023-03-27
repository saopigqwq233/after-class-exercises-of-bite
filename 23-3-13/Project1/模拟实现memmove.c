#include"stdio.h"
#include"stdlib.h"
#include"string.h"
#include"assert.h"
void* my_memmove(void* dest, const void* src, size_t n);
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("原数组：\n");
	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("拷贝32个字节(8个整形数据)到目标数组\n");

	printf("库函数效果：\n");
	int dest1[8] = { 0 };
	memmove(dest1, arr, 32);
	for (int i = 0; i < (32 / sizeof(int)); i++)
	{
		printf("%d ", dest1[i]);
	}
	printf("\n");

	printf("模拟函数效果:\n");
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
	char* d = (char*)dest;//将dest转化未char*型
	const char* s = (const char*)src;
	if (d <= s)//前-》后，直接按照memcpy来
	{
		while (n--)
		{
			*d++ = *s++;//逐字节复制
		}
	}
	else//后-》前，目标区域在源区域之前
	{
		//先将指针移到末尾
		d += n;
		s += n;
		while (n--)
		{
			*--d = *--s;//从n-1的位置复制到0
		}
	}
	return dest;
}