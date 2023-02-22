/*6
#include <stdio.h>
int main()
{
    //6
    int *a[10];
    int b=10;
    a[0]=&b;
    int (*c)[3];
    (*c)[1]=&b;
    return 0;
}
*/
//10
/*
#include "stdio.h"
#include "string.h"
void ReverseArr(char *FString,char*NString);//逆转字符串函数,以字符串指向开头和最后一个有效字符的指针为参数
int main()
{
    char string[10001];//字符串最长10000，设置10001个空间便于存储\0
    gets(string);//输入字符串,
    ReverseArr(string,string+ strlen(string)-1);
    puts(string);
    return 0;
}
void ReverseArr(char *FString,char*NString)
{
    if(FString<NString)//左指针还指在右指针前面
    {
        char Temp=*FString;
        *FString=*NString;
        *NString=Temp;
        ReverseArr(FString+1,NString-1);//左指针右移，右指针左移
    }
    else if(FString==NString||FString==(NString+1))//左指针和右指针指向同一个数或者左指针直到右指针右边
        return;
}
*/
//11
/*
#include "stdio.h"
//PriceCola是汽水的价格
#define PriceCola 1
int main()
{
    int Money;//零钱数
    int NumCola=0;//汽水数量
    scanf("%d",&Money);
    NumCola+=(Money/PriceCola);//加上用钱买的汽水
    NumCola+=(NumCola/2);//加上两个空瓶换的汽水
    printf("%d",NumCola);
    return 0;
}
*/

