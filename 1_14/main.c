//9
/*
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
}*/
//10
/*
#include "stdio.h"
#include "stdlib.h"
void init(int *arr,int arr_len);//��ʼ��0
void print(int *arr,int arr_len);//��ӡ
void reverse(int *arr,int arr_len);//����
int main()
{
    int arr[10],len=sizeof (arr)/sizeof (int );
    init(arr,len);
    printf("��ʼ��������Ԫ�أ�");
    print(arr,len);//��ӡ��ʼ���������
    //�����鸳ֵ����ӡ
    for (int i = 0; i < len; ++i)
    {
        arr[i]=i;
    }
    printf("����ǰ���飺");
    print(arr,len);
    //�������鲢��ӡ
    printf("���������Ԫ�أ�");
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
//ð������Ӵ�С
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
void BubbleSort(int *arr,int arr_len);//ð��������
void print(int *arr,int arr_len);//��ӡ����Ԫ�غ���
int main()
{
    int array[6],arr_len=6;//��������ʹ洢���鳤�ȵı���
    srand((unsigned) time(NULL));
    for (int i = 0; i < arr_len; ++i)
    {
        array[i]=rand()%20;//�����������0-20��ֵ
    }
    printf("����ǰ����Ԫ�أ�");
    print(array,arr_len);
    BubbleSort(array, arr_len);//�Ӵ�С����
    printf("���������Ԫ�أ�");
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
    for (int i = 0; i < arr_len-1; ++i)//ð�������ѭ����Ҫѭ�������鳤��-1��
    {
        for (int j = 0; j <arr_len-1-i ; ++j)//��ѭ����Ҫѭ�������鳤��-�ⲿѭ������-1��
        {
            if(arr[j]<arr[j+1])//���ǰһ��Ԫ��С�ں�һ��������
                //������С�������򣬱ȽϷ��ż���
            {
                int tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
            }
        }
    }
}