//1
/*
#include <stdio.h>
int main()
{
    char str1[] = "hello bit.";
    char str2[] = "hello bit.";
    char *str3 = "hello bit.";
    char *str4 = "aello bit.";
    if(str1 == str2)
        printf("str1 and str2 are same\n");
    else
        printf("str1 and str2 are not same\n");
    if(str3 == str4)
        printf("str3 and str4 are same\n");
    else
        printf("str3 and str4 are not same\n");

    return 0;
}*/
//7
#include "stdio.h"
#include "string.h"
void Reverse(char *Left,char* Right);//��תָ���ַ���λ�õĺ���
void LeftVerse(char *string,unsigned int length,int k);//��������
int main()
{
    char String[]="ABCDEFG";
    int k;
    puts("��תǰ");
    puts(String);
    printf("����k���ַ�������k��");
    scanf("%d",&k);
    LeftVerse(String, strlen(String),k);
    puts("��ת��");
    puts(String);
    return 0;
}
void Reverse(char *Left,char *Right)
{
    if(Left==Right||Left>Right)
        return;
    else
    {
        char temp=*Left;
        *Left=*Right;
        *Right=temp;
        Reverse(Left+1,Right-1);
    }
}
void LeftVerse(char *string,unsigned int length,int k)
{
    Reverse(string,string+k-1);
    Reverse(string+k,string+length-1);
    Reverse(string,string+length-1);
}