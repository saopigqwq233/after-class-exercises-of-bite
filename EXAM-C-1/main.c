//1
/*
#include <stdio.h>
int main()
{
    long long int MinYueshu(long long int ,long long int );
    long long int a,b;
    scanf("%lld %lld",&a,&b);
    if(a<b)
    {
        long long int temp=a;
        a=b;
        b=temp;
    }
    printf("%lld\n", a*b/MinYueshu(a,b));
    return 0;
}
long long int MinYueshu(long long int a,long long int b)
{
    if(a%b==0)
        return b;
    else
        return MinYueshu(b,a%b);
}*/
//2
#include "stdio.h"
#include "stdlib.h"
int NumberOfEmpty(char *S);//检查有多少单词
int main()
{
    char Sentence[101];
    gets(Sentence);//输入句子
    int *EmptyBlock=(int *) malloc(sizeof (int ) * NumberOfEmpty(Sentence));
    int j=0;
    for (int i = 0; i < 101; ++i)
    {
        if(Sentence[i]==' ')
        {
            EmptyBlock[j] = i;
            j++;
        }
    }
    for (int i = j-1; i>=0 ; --i)
    {
        for (int k = EmptyBlock[i]+1;Sentence[k]!=' '&&Sentence[k]!='\0' ; ++k)
        {
            printf("%c",Sentence[k]);
        }
        printf(" ");
    }
    for (int i = 0;Sentence[i]!=' ' ; ++i) {
        printf("%c",Sentence[i]);
    }
    return 0;
}
int NumberOfEmpty(char *S)
{
    int ret=0;
    for (int i = 0; S[i] !='\0' ; ++i)
    {
        if(S[i]==' ')
            ret++;
    }
    return ret;
}