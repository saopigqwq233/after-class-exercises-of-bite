#include "string.h"
#include "stdio.h"
#include "assert.h"
char *my_strncat(char *dest,char *src,size_t n);//dest是目标字符串，src是要接在dest后的字符串，n是复制字符
int main()
{
    char dest1[20]="Hell";
    char dest2[20]="hell";
    char src1[10]="o World!";
    char src2[10]="o World!";

    printf("库函数实现\n");
    strncat(dest1,src1,9);
    puts(dest1);
    printf("\n");

    printf("模拟函数实现\n");
    my_strncat(dest2,src2,9);
    puts(dest2);
    printf("\n");

    return 0;
}
char *my_strncat(char *dest,char *src,size_t n)
{
    assert(dest&&src);
    char *des=dest;
    //先让des遍历到dest数组的'\0'
    while (*des)
    {
        des++;
    };//如果des指向元素为空，结束循环，结束时des指向’\0‘

    //接下来开始连接dest和src
    while (n--)//计数结束，粘贴操作停止
    {
        if(*src=='\0')//到了复制文件的末尾，复制停止
            break;
        *des++=*src++;
    }
    *des='\0';
    return dest;
}