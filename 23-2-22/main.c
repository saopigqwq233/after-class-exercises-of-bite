#include <stdio.h>
#include "string.h"
//��ת�ַ�������������
void Reverse(char *Left,char *Right);//��ת�ַ�������
void LeftVerse(char *string,unsigned int length,int k);//����k���ַ�
//�ж��Ƿ���ת���Ի�õĺ��������Է���1�����з���2
int IsVersed(const char* former,const char *letter);
int main()
{
    char s1[100],s2[100];
    char temp[100];
    puts("�����ַ���s1:\n");
    gets(s1);
    puts("�����ַ���s2\n");
    gets(s2);
    if(IsVersed(s1,s2))
    {
        printf("1");
    }
    else
        printf("0");
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
int IsVersed(const char* former,const char *letter)
{
    int LengthF= strlen(former),LengthL= strlen(letter);
    if(LengthF!=LengthL)
        return 0;
    for (int i = 0; i < LengthL-1; ++i)
    {
        LeftVerse(letter,LengthL,1);
        if(strcmp(former,letter)==0)
            return 1;
    }
    return 0;
}
