//2
/*
#include <stdio.h>
int main()
{
    int a=10,b=5;
    //const修饰int，防止指针指向的数值改变
    */
/*const int *c=&a;
    *a=5;*//*

    int  *const c=&a;
    *c=4;
    return 0;
}
*///5
/*
#include "stdio.h"
#define ArrNum 6
//ArrNum是数组内元素个数
int main()
{
    void ChangeArr(int []);//将奇数前置的函数,类似于冒泡排序，将偶数往后排
    int num[ArrNum];
    for (int i = 0; i < ArrNum; ++i)
    {
        scanf("%d",&num[i]);
    }
    ChangeArr(num);
    for (int i = 0; i < ArrNum; ++i)
    {
        printf("%d ",num[i]);
    }
    return 0;
}
void ChangeArr(int num[ArrNum])
{
    for (int i = 0; i < ArrNum-1; ++i)
    {
        for (int j = 0; j < ArrNum-i-1; ++j)
        {
            if(num[j]%2==0)//如果是偶数
            {
                int temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }
}*/
//6
/*
#include "stdio.h"
int main()
{
    char *str_cpy(char *dest,const char *src);
    char string[20];
    str_cpy(string,"I like coding");
    puts(string);
    return 0;
}
char *str_cpy(char *dest,const char *src)
{
    for (int i = 0;src[i]!='\0'; ++i)
    {
        dest[i]=src[i];
    }
    return dest;
}*/
//7
#include "stdio.h"
#include "string.h"
int main()
{
    int str_len(char []);
    char string[20]={"I like coding"};
    printf("str_len=%d\n", str_len(string));
    printf("strlen=%d", strlen(string));
    return 0;
}
int str_len(char string[])
{
    int ret=0;
    for (int i = 0; string[i]!='\0' ; ++i)
    {
        ret++;
    }
    return ret;
}