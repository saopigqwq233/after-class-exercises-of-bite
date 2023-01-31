#include<stdio.h>
#include<stdlib.h>
void SwapArr(int*a,int*b,int len_arr);//交换函数
int main()
{
    int arr1[]={1,2,3,4,5};
	int arr2[]={6,7,8,9,10};
	printf("arr1元素有 ");
	for (int i=0;i<5 ;i++ )
	{
	    printf("%d ",arr1[i]);
	}
	printf("\narr2元素有 ");
	for (int i=0;i<5 ;i++ )
	{
		printf("%d ",arr2[i]);
	} 
	printf("\n");
	SwapArr(arr1,arr2,sizeof(arr1)/sizeof(int));//交换
	printf("交换后\n");
	printf("arr1元素有 ");
	for (int i=0;i<5 ;i++ )
	{
	    printf("%d ",arr1[i]);
	}
	printf("\narr2元素有 ");
	for (int i=0;i<5 ;i++ )
	{
		printf("%d ",arr2[i]);
	}
	printf("\n");
	system("pause");
}
void SwapArr(int*a,int*b,int len_arr)
{
	for (int i=0;i<len_arr;i++ )
	{
		int tmp=a[i];
		a[i]=b[i];
		b[i]=tmp;
	}
}