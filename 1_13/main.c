//4
//斐波那契
/*
#include <stdio.h>
int Fibo(int );//计算斐波那契数的函数
int main()
{
    int input;
    scanf("%d",&input);
    printf("%d", Fibo(input));
    return 0;
}
int Fibo(int n)
{
    //递归法
//    if(n==1||n==2)//斐波那契第一和第二个数都是1
//        return 1;
//    else
//        return Fibo(n-1)+ Fibo(n-2);//第n个数就是第n-1和第n-2个数的和
    int a=1,b=1,c=1;//a,b分别代表加数，c代表斐波那契第num项
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
int POW(int ,int );//计算n的k次方的函数
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    printf("%d", POW(n,k));
    return 0;
}
int POW(int n,int k)
{
    if(k==1)//n的1次方就是n，返回n
        return n;
    else//n的k次方就是n*（n的k-1次方）
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
    printf("位数和：%d", DigitSum(input));
}
int DigitSum(int num)
{
    if(num/10==0)//只有一位数
        return num;//直接返回本身
    else//多位数
        return num%10*/
/*num的个位数*//*
+ DigitSum(num/10);
}*/
//7
/*
#include "stdio.h"
#include "string.h"
void reverse_string(char* ,char* );//已数组第一个和最后一个元素的指针为参数
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
    if(left==right)//如果左右指针指到数组同一位置
        return;//无需操作
    else if(left==(right-1))//$$$
    {
        char tmp=*left;
        *left=*right;
        *right=tmp;
    }
    else //左右指针未到一起
    {
        reverse_string(left+1,right-1);//指针向中间逼近
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
    if(*(point)=='\0')//遇到最后一个有效字符
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
    //递归
//    if(n==1)//1的阶乘是1
//        return 1;
//    else//n的阶乘是n*(n-1的阶乘)
//        return n* Jie(n-1);
//非递归
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
    if(n/10==0)//n只有一位
        printf("%d",n);
    else
    {
        PrintEvery(n/10);
        printf("%d",n%10);
    }
}