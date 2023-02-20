//2
/*
#include <stdio.h>
int main() {
    printf("%d\n",sizeof (int *));
    return 0;
}
*/
//3
/*
#include <stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5};
    short *p = (short*)arr;
    int i = 0;
    for(i=0; i<4; i++)
    {
        *(p+i) = 0;
    }

    for(i=0; i<5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}*/
//4
/*
#include <stdio.h>
int main()
{
    int a = 0x11223344;
    char *pc = (char*)&a;
    *pc = 0;
    printf("%x\n", a);
    return 0;
}*/
//5
/*
#include "stdio.h"
int main()
{
    void PrintArr(int *arr,int ArrLen);//打印数组的函数
    int arr[]={1,2,3,4,5,6,7};
    PrintArr(arr,sizeof (arr)/sizeof (int ));
    return 0;
}
void PrintArr(int *arr,int ArrLen)
{
    for (int i = 0; i < ArrLen; ++i)
    {
        printf("%d ",*(arr+i));
    }
}*/
//6
/*
#include "stdio.h"
#include "stdlib.h"
int main()
{
    //上部高度为7的三角形
    for (int i = 1; i <= 7; ++i)//高度为7的循环
    {
        for (int j =1; j <= i+6; ++j)//每一行的空格+'*'数量，不带*右面的空格
        {
            if(j<=7-i)
                printf(" ");//第7-（行数）之前全是空格
            else
                printf("*");
            printf(" ");//输出完空格或者*后再输出空格隔开
        }
        printf("\n\n");//每字符行之间空两行
    }
    //下部分高度为6的倒三角
    for (int i = 1; i <=6 ; ++i) //高度为6的循环
    {
        for (int j = 1; j <= 13-i ; ++j)
        {
            if(j<=i)//第i之前全是空格
                printf(" ");
            else
                printf("*");
            printf(" ");
        }
        printf("\n\n");
    }
    system("pause");
    return 0;
}*/
//7
/*
#include "stdio.h"
#include "stdlib.h"
#include "math.h"
int IsShuiXian(int );//判断是否是水仙花数，是返回1，不是返回0
int WeiShu(int );//返回位数
int main()
{

    for (int i = 0; i < 100001; ++i)
    {
        if(IsShuiXian(i))
            printf("%d ",i);
    }
    system("pause");
    return 0;
}
int IsShuiXian(int n)
{
    int Weishu= WeiShu(n);//位数
    int Pre=n;//需要判断的数
    int sum=0;
    while(n>0)
    {
        sum+= pow(n%10,Weishu);
        n/=10;
    }
    if(sum==Pre)
        return 1;
    else
        return 0;
}
int WeiShu(int n)
{
    int ret=0;
    while (n>0)
    {
        if(n/10!=0)
            ret++;
        n/=10;
    }
    return ret+1;
}*/
//8
#include "stdio.h"
#include "stdlib.h"
#define Pow2(x) ((x)*10+(x))
#define Pow3(x) ((x)*100+Pow2(x))
#define Pow4(x) ((x)*1000+Pow3(x))
#define Pow5(x) ((x)*10000+Pow4(x))
int main()
{
    int n,Sn;
    scanf("%d",&n);
    Sn=n+ Pow2(n)+ Pow3(n)+ Pow4(n)+ Pow5(n);
    printf("%d",Sn);
    system("pause");
    return 0;
}