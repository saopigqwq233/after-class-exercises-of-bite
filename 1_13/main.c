//4
//쳲�����
/*
#include <stdio.h>
int Fibo(int );//����쳲��������ĺ���
int main()
{
    int input;
    scanf("%d",&input);
    printf("%d", Fibo(input));
    return 0;
}
int Fibo(int n)
{
    //�ݹ鷨
//    if(n==1||n==2)//쳲�������һ�͵ڶ���������1
//        return 1;
//    else
//        return Fibo(n-1)+ Fibo(n-2);//��n�������ǵ�n-1�͵�n-2�����ĺ�
    int a=1,b=1,c=1;//a,b�ֱ���������c����쳲�������num��
    for (int num = 3; num <= n; ++num)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}
*/
//5
/*
#include "stdio.h"
int POW(int ,int );//����n��k�η��ĺ���
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    printf("%d", POW(n,k));
    return 0;
}
int POW(int n,int k)
{
    if(k==1)//n��1�η�����n������n
        return n;
    else//n��k�η�����n*��n��k-1�η���
        return n* POW(n,k-1);
}*/
//6
/*
#include "stdio.h"
int DigitSum(int );//
int main()
{
    int input;
    scanf("%d",&input);
    printf("λ���ͣ�%d", DigitSum(input));
}
int DigitSum(int num)
{
    if(num/10==0)//ֻ��һλ��
        return num;//ֱ�ӷ��ر���
    else//��λ��
        return num%10*/
/*num�ĸ�λ��*//*
+ DigitSum(num/10);
}*/
//7
/*
#include "stdio.h"
#include "string.h"
void reverse_string(char* ,char* );//�������һ�������һ��Ԫ�ص�ָ��Ϊ����
int main()
{
    char arr[]="abcdef";
    char *left=arr,*right=(arr+ strlen(arr)-1);
    puts(arr);
    putchar('\n');
    reverse_string(left,right);
    puts(arr);
    return 0;
}
void reverse_string(char* left,char* right)
{
    if(left==right)//�������ָ��ָ������ͬһλ��
        return;//�������
    else if(left==(right-1))//$$$
    {
        char tmp=*left;
        *left=*right;
        *right=tmp;
    }
    else //����ָ��δ��һ��
    {
        reverse_string(left+1,right-1);//ָ�����м�ƽ�
        char tmp=*left;
        *left=*right;
        *right=tmp;
    }
}*/
//8
/*
#include "stdio.h"
#include "string.h"
int my_strlen(char*);
int main()
{
    char arr[80];
    gets(arr);
    printf("length of array:%d", my_strlen(arr));
    return 0;
}
int my_strlen(char *point)
{
    static int num=0;
    if(*(point)=='\0')//�������һ����Ч�ַ�
        return num;
    else
    {
        num++;
        my_strlen(point+1);
    }
}*/
//9
/*
#include "stdio.h"
int Jie(int );
int main()
{
    int input;
    scanf("%d",&input);
    printf("%d", Jie(input));
    return 0;
}
int Jie(int n)
{
    //�ݹ�
//    if(n==1)//1�Ľ׳���1
//        return 1;
//    else//n�Ľ׳���n*(n-1�Ľ׳�)
//        return n* Jie(n-1);
//�ǵݹ�
    int ret=1;
    while (n!=0)
    {
        ret*=n--;
    }
    return ret;
}*/
//10
#include "stdio.h"
void PrintEvery(int );
int main()
{
    int input;
    scanf("%d",&input);
    PrintEvery(input);
    return 0;
}
void PrintEvery(int n)
{
    if(n/10==0)//nֻ��һλ
        printf("%d",n);
    else
    {
        PrintEvery(n/10);
        printf("%d",n%10);
    }
}