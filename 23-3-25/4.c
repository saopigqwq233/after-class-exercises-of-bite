#include "stdio.h"
#include "stdlib.h"
#include "assert.h"
int my_atoi(char *num_string);//返回转换后的长整数，如果没有执行有效的转换，则返回零
void test(char*tests);//接收需要测试的字符串，在test()函数中测试库函数和模拟函数
int main()
{
    char test1[]="123";
    test(test1);
    char test2[]="-123";
    test(test2);
    char test3[]="  234";
    test(test3);
    char test4[]="  -234";
    test(test4);
    char test5[]="abc123";
    test(test5);
    char test6[]="123abc";
    test(test6);
    char test7[]="abc-123";
    test(test7);
    char test8[]="-123abc";
    test(test8);
    return 0;
}
void test(char test[])
{
    int c_atoi=atoi(test);//库函数返回结果
    int m_atoi= my_atoi(test);//模拟函数返回结果
    printf(" 库函数结果:%d\n模拟函数结果:%d\n",c_atoi,m_atoi);
    printf("\n");
}
int my_atoi(char *str)
{
    assert(str);
    int ret=0;//需要返回的数
    int sign=1;//记录是正数还是负数,默认是正数
    while (*str==' ')//先让指针跳过空格
    {
        str++;
    }
    if(*str=='-')//遇到负号，则变为负数
    {
        sign = -1;
        str++;
    }
    else if(*str=='+')//遇到正号往后跳一位
        str++;
    while(*str>='0'&&*str<='9')
    {
        ret= ret*10+(*str-'0');//*str-'0'可以得到*str的整数型,比如’9‘-’0‘=9
        str++;
    }
    return ret*sign;
}