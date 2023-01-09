//1
//乘法口诀表
/*
#include <stdio.h>
int main()
{
    int left;//被乘数
    int right;//乘数
    for(left=1;left<10;left++)
    {
        for (right = 1; right <= left; right++)
        {
            printf("%dX%d=%2d ",left,right,left*right);
        }
        printf("\n");
    }
    return 0;
}
*/
//2
//求最大值
//法一
/*
#include "stdio.h"
#define Max(X,Y) (X)>(Y)?X:Y
int main()
{
    int Max_arr(int arry[10],int ,int );
    int input[10];
    for (int i = 0; i < 10; ++i)
    {
        scanf("%d",&input[i]);//输入十个数
    }
    printf("%d", Max_arr(input,0,10));
    return 0;
}
int Max_arr(int arry[10],int left,int right)
{
    if(left==right-1)
        return Max((arry[left]),(arry[right]));
    else if(left==right)
        return arry[left];
    else
        return Max((Max_arr(arry,left,(left+right)/2)),
                   (Max_arr(arry,(left+right)/2+1,right)));
}*/
//法二
/*
#include "stdio.h"
int main()
{
    int input[10];
    for (int i = 0; i < 10; ++i)
    {
        scanf("%d",&input[i]);//输入十个数
    }
    int output=input[0];
    for (int i = 1; i < 10; ++i)
    {
        if(output<input[i])//更新output的值
        {
            output=output+input[i];
            input[i]=output-input[i];
            output=output-input[i];
        }
    }
    printf("%d\n",output);
    return 0;
}*/
//3
//递归做法
/*
#include "stdio.h"
float MarkFunc(float );
int main()
{
    printf("%f", MarkFunc(100));
}
float MarkFunc(float n)
{
    if(n==1)
        return 1;
    else if((int)n%2==0)
        return MarkFunc(n-1)-(1/n);
    else if((int)n%2==1)
        return MarkFunc(n-1)+(1/n);
}*/
//4
/*
#include "stdio.h"
int main()
{
    int ten;//十位数
    int ind;//个位数
    int num=0;//出现9的次数
    for (int ten = 0; ten < 10; ++ten)
    {
        for (int ind = 0; ind < 10; ++ind)
        {
            if(ten%9==0&&ten!=0)//十位数是9
            {
                num++;
            }
            if(ind%9==0&&ind!=0)//个位是9
            {
                num++;
            }
        }
    }
    printf("%d",num);
    return 0;
}*/
//5
//猜数字游戏
/*
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
void game(void );

int main()
{
    int input=1;
    printf("输入1开始游戏，输入0结束游戏\n");
    while (input)
    {
        scanf("%d",&input);
        switch (input)
        {
            case 1:
                game();
                break;
            case 0:
                printf("游戏结束\n");
                break;
            default:
                printf("错误输入，请重新输入->");
        }
    }
    printf("程序结束\n");
    return 0;
}
void game(void )
{
    srand((unsigned int ) time(NULL));
    printf("游戏开始\n");
    printf("随机数范围1--100\n");
    int random=rand()%100+1;
    int input;
    while (1)
    {
        printf("请猜数，->");
        scanf("%d",&input);
        if(random==input)
        {
            printf("恭喜你猜对了\n");
            break;
        }
        else if(random>input)
        {
            printf("猜小了，再试试吧\n");
        }
        else if(random<input)
        {
            printf("猜大了，再试试吧\n");
        }
    }
}*/
//6
#include "stdio.h"
int main()
{
    int array[]={22,33,44,55,66,77};
    int left=0,right=5;//数组最左和最右的下标
    int input;
    printf("输入你要查找的数->");
    scanf("%d",&input);
    while (1)
    {
        int mid=(left+right)/2;
        if(left>right)
        {
            printf("没找到\n");
            break;
        }
        else if(input==array[mid])
        {
            printf("找到了，下标为%d",mid);
            break;
        }
        else if(input>array[mid])
        {
            left=(left+right)/2+1;
        }
        else if(input<array[mid])
        {
            right=(left+right)/2-1;
        }
    }
}