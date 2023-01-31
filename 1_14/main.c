//9
/*
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
}*/
//10
/*
#include "stdio.h"
#include "stdlib.h"
void init(int *arr,int arr_len);//初始化0
void print(int *arr,int arr_len);//打印
void reverse(int *arr,int arr_len);//逆置
int main()
{
    int arr[10],len=sizeof (arr)/sizeof (int );
    init(arr,len);
    printf("初始化后数组元素：");
    print(arr,len);//打印初始化后的数组
    //对数组赋值并打印
    for (int i = 0; i < len; ++i)
    {
        arr[i]=i;
    }
    printf("逆序前数组：");
    print(arr,len);
    //逆序数组并打印
    printf("逆序后数组元素：");
    reverse(arr,len);
    print(arr,len);
    system("pause");
    return 0;
}
void init(int *arr,int arr_len)
{
    for (int i = 0; i < arr_len; ++i)
    {
        arr[i]=0;
    }
}
void print(int *arr,int arr_len)
{
    for (int i = 0; i < arr_len; ++i)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void reverse(int *arr,int arr_len)
{
    int *tmp=(int *) malloc(sizeof(int )*arr_len);
    for (int i = 0,j=arr_len-1; i<arr_len &&j>=0; ++i,--j)
    {
        tmp[j]=arr[i];
    }
    for (int i = 0; i < arr_len; ++i)
    {
        arr[i]=tmp[i];
    }
}*/
//11
//冒泡排序从大到小
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
void BubbleSort(int *arr,int arr_len);//冒泡排序函数
void print(int *arr,int arr_len);//打印数组元素函数
int main()
{
    int array[6],arr_len=6;//定义数组和存储数组长度的变量
    srand((unsigned) time(NULL));
    for (int i = 0; i < arr_len; ++i)
    {
        array[i]=rand()%20;//给数组随机赋0-20的值
    }
    printf("排序前数组元素：");
    print(array,arr_len);
    BubbleSort(array, arr_len);//从大到小排序
    printf("排序后数组元素：");
    print(array,arr_len);
}
void print(int *arr,int arr_len)
{
    for (int i = 0; i < arr_len; ++i)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void BubbleSort(int *arr,int arr_len)
{
    for (int i = 0; i < arr_len-1; ++i)//冒泡排序大循环需要循环（数组长度-1）
    {
        for (int j = 0; j <arr_len-1-i ; ++j)//内循环需要循环（数组长度-外部循环次数-1）
        {
            if(arr[j]<arr[j+1])//如果前一个元素小于后一个，交换
                //如果向从小到大排序，比较符号即可
            {
                int tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
            }
        }
    }
}