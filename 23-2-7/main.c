//3
/*#include <stdio.h>
int main()
{
    int a=10,b=9;
    printf("转换前a=%d，b=%d\n",a,b);
    a=a^b;
    b=a^b;//b此时已经是原来a的值
    a=a^b;
    printf("转换后a=%d，b=%d",a,b);
    return 0;
}*/
//4
/*
#include "stdio.h"
int main()
{
    int NumberOf1(int n);
    int num;
    scanf("%d",&num);
    printf("%d", NumberOf1(num));
    return 0;
}
int NumberOf1(int n)
{
    static int Wei=0;//Wei表示到了第几位，从低位到高位
    Wei++;
    if(Wei<=32)//Wei还在32位2进制数当中
    {
        if((n&1)==1)//当前位是1
        {
            return 1+ NumberOf1(n>>1);//返回1+高位的1的个数
        }
        else //当前位不是1
            return 0+ NumberOf1(n>>1);//返回0+高位的1的个数
    }
    else//Wei已经超过32位
        return 0;
}
*/
/*
#include "stdio.h"
int main()
{
    int n[32]={0};
    int num;
    scanf("%d",&num);
    for(int i=31;i>-1;i--)
    {
        n[i]=(num&1);
        num>>=1;
    }


    printf("原数二进制：");
    for (int i = 0; i < 32; ++i)
    {
        printf("%d",n[i]);
    }
    printf("\n");


    printf("奇数位二进制：");
    for (int i = 1;i<32 ; ++i) //打印奇数位，
    {
        if(i%2==1)
        printf("%d",n[i]);
    }
    printf("\n");


    printf("偶数位二进制：");
    for (int i = 0;i<32; ++i)
    {
        if( i%2==0)
        printf("%d",n[i]);
    }
    return 0;
}
*/
//6
#include "stdio.h"
int main()
{
    int NumberOf1(int );//借用之前的多少个1函数
    int m,n;
    scanf("%d %d",&m,&n);
    printf("%d", NumberOf1(m^n));//m,n在某一位上相同则为0，不同为1
    return 0;
}
int NumberOf1(int n)
{
    static int Wei=0;//Wei表示到了第几位，从低位到高位
    Wei++;
    if(Wei<=32)//Wei还在32位2进制数当中
    {
        if((n&1)==1)//当前位是1
        {
            return 1+ NumberOf1(n>>1);//返回1+高位的1的个数
        }
        else //当前位不是1
            return 0+ NumberOf1(n>>1);//返回0+高位的1的个数
    }
    else//Wei已经超过32位
        return 0;
}