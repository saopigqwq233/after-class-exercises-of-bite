#include <stdio.h>
#include "string.h"
#include "assert.h"
char* my_strncpy(char* dest,char *src,size_t n);
int main()
{
    char src1[20]="Hello World!";
    char src2[20]="Hello World!";
    char dest1[16]={0};
    char dest2[16]={0};
    //库函数
    printf("库函数效果:\n");
    strncpy(dest1,src1,8);
    puts(dest1);
    printf("\n");
    //模拟实现函数
    printf("模拟实现函数:\n");
    my_strncpy(dest2,src2,8);
    puts(dest2);
    printf("\n");
    return 0;
}
char* my_strncpy(char* dest,char *src,size_t n)
{
    assert(src&&dest);
    while (n--)
    {
        if(*src!='\0')//如果出现src的字符串长度小于n，用空字节填充dest
            *dest++=*src++;
        else
        {
            *dest='\0';
            dest++;
        }
    }
    return dest;
}
