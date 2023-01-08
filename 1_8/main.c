//9
/*
#include "stdio.h"
int main()
{
    for (int i = 1; i <=100 ; ++i)
    {
        if(i%3==0)
            printf("%d ",i);
    }
    return 0;
}*/
//10
/*
#include "stdio.h"
int main()
{
    void sort(int *);
    int input[3]={0};
    for (int i = 0; i < 3; ++i)
    {
        scanf("%d",&input[i]);
    }
    sort(input);
    printf("%d %d %d",input[0],input[1],input[2]);
    return 0;
}
void sort(int input[3])
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = i+1; j < 3; ++j)
        {
            if(input[i]<input[j])
            {
                int temp=input[i];
                input[i]=input[j];
                input[j]=temp;
            }
        }
    }
}*/
//11
/*
#include "stdio.h"
int main()
{
    int Isit(int );
    for (int i = 100; i <= 200; ++i)
    {
        if(Isit(i))
            printf("%d ",i);
    }
    return 0;
}
int Isit(int i)
{
    int flat=0;
    for (int j = 2; j < i; ++j)
    {
        if(i%j==0)
        {
            flat=1;//i不是素数,flat=1
            break;
        }
    }
    if(flat==1)
        return 0;
    else
        return 1;
}*/
//12
/*
#include "stdio.h"
int main()
{
    int IsLeapYear(int );
    for (int i = 1000; i <=2000 ; ++i)
    {
        if(IsLeapYear(i))
            printf("%d ",i);
    }
    return 0;
}
int IsLeapYear(int year)
{
    if(((year%4==0)&&(year%100!=0))||(year%400==0))
        //能被4整除却不能被100整除或能被400整除的年份就是闰年
        return 1;
    else
        return 0;
}*/
//13
#include "stdio.h"
int main()
{
    int GreatDivi(int ,int );
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    if(num1<num2)
    {
        int temp=num2;
        num2=num1;
        num1=num2;
    }
    printf("%d", GreatDivi(num1,num2));
    return 0;
}
int GreatDivi(int a,int b)
{
    if(b==0)
        return a;
    else
        return GreatDivi(b,a%b);
}