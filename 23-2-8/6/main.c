#include <stdio.h>
#include "stdlib.h"
int main()
{
    int IsLily(int );
    int Num=10000;
    for(;Num<=99999;Num++)
    {
        if(IsLily(Num))
            printf("%d ",Num);
    }
    return 0;
}
int IsLily(int num)
{
    //num/(10的n次方)可以得到前n位
    //num%(10的n次方)可以得到后n位数
    int sum=0;
    for (int i = 10; i < 100000; i*=10)
    {
        sum+=(num/i)*(num%i);
    }
    if(sum==num)
        return 1;
    else
        return 0;
}