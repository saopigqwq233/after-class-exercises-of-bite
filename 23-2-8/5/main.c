#include "stdio.h"
int main()
{
    int ways(int );
    int n;
    scanf("%d",&n);
    printf("%d",ways(n));
    return 0;
}
int ways(int n)
{
    if(n==1)//一个台阶，一步到位
        return 1;
    else if(n==2)//两个台阶，一步一步或者一大步到位
        return 2;
    else //第n个台阶，要么从n-2一大步，要么从n-1一步
    //只需要求n-2之前和n-1之前的方法和
        return ways(n-1)+ ways(n-2);
}


