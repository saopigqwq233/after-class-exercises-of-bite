#include<stdio.h>
#include<stdlib.h>
void SwapArr(int*a,int*b,int len_arr);//��������
int main()
{
    int arr1[]={1,2,3,4,5};
	int arr2[]={6,7,8,9,10};
	printf("arr1Ԫ���� ");
	for (int i=0;i<5 ;i++ )
	{
	    printf("%d ",arr1[i]);
	}
	printf("\narr2Ԫ���� ");
	for (int i=0;i<5 ;i++ )
	{
		printf("%d ",arr2[i]);
	} 
	printf("\n");
	SwapArr(arr1,arr2,sizeof(arr1)/sizeof(int));//����
	printf("������\n");
	printf("arr1Ԫ���� ");
	for (int i=0;i<5 ;i++ )
	{
	    printf("%d ",arr1[i]);
	}
	printf("\narr2Ԫ���� ");
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