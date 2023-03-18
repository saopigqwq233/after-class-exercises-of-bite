//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//char* my_strcat(char* dest, const char* src);//，将src的内容追加到dest返回追加后的字符串
//int main()
//{
//    char dest[20] = "Hello ";
//    char src[] = "world!";
//    printf("%s\n", my_strcat(dest, src));
//    return 0;
//}
//char* my_strcat(char* dest, const char* src)
//{
//    assert(dest && src);
//    char* p = dest + strlen(dest);//让p指向dest的结束标志符\0
//    while (*src != '\0')
//    {
//        *p++ = *src++;//*p=*src,p++,src++;
//    }
//    *p = '\0';
//    return dest;
//}