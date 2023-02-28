/*#include <stdio.h>
//3
int main()
{
    unsigned char a=200;
    unsigned char b=100;
    unsigned char c=0;
    c=a+b;
    printf("%d %d",a+b,c);
    return 0;
}*/
/*
#include "stdio.h"
int main()
{
    unsigned int a= 0x1234;
    unsigned char b=*(unsigned char *)&a;
    return 0;
}*/
//5
/*
#include "stdio.h"
#include "string.h"
int main()
{
    char a[1000] = {0};
    int i=0;
    for(i=0; i<1000; i++)
    {
        a[i] = -1-i;
    }
    printf("%d",strlen(a));
    return 0;
}*/
//7
/*
#include "stdio.h"
typedef struct D{
    char Name;
    int Rank;
}Def;//选手的描述数据类型，Name是描述的对象，rank是描述排名
typedef struct J{
    int Rank;
    Def Definate[2];
}Joiner;//选手数据类型，Rank是选手排名，
// Definate【2】是每个选手有两个描述
int main()
{
    void DEF(Joiner*JOINER,char Name1,int Rank1,char Name2,int Rank2);//选手描述函数，以选手名的地址，描述对象名和排名为参数
    int IsConflict()
    Joiner A,B,C,D,E;//定义五个选手,此时默认五个选手Rank都为0
    //5人的描述
    DEF(&A,'B',2,'A',3);
    DEF(&B,'B',2,'E',4);
    DEF(&C,'C',1,'D',2);
    DEF(&D,'C',5,'D',3);
    DEF(&E,'E',4,'A',1);

}
void DEF(Joiner*JOINER,char Name1,int Rank1,char Name2,int Rank2)
{
    JOINER->Definate[0].Name=Name1;
    JOINER->Definate[0].Rank=Rank1;
    JOINER->Definate[1].Name=Name2;
    JOINER->Definate[1].Rank=Rank2;
}*/
//9
/*
#include "stdio.h"
#include "stdlib.h"
long long int Jiechen(long long int n)
{
    if(n==1||n==0)
        return 1;
    else
        return n* Jiechen(n-1);
}
int main()
{
    void PrintTriA();//打印杨辉三角
    PrintTriA();
    system("pause");
    return 0;
}
void PrintTriA()
{
    for (int i = 1;1; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            printf("%lld ", Jiechen(i-1)/(Jiechen(j-1)* Jiechen(i-j)));
        }
        printf("\n");
    }
}
*/
//7
/*
#include "stdio.h"
//避免接下来的if中条件太长,预先设置的宏定义
// 每个人描述一半对的宏定义，其中X,Y分别为条件
#define DescribeIsHalfCorrect(X,Y) ((X)==1&&(Y)==0)||((X)==0&&(Y)==1)
int main()
{
    int IsReapt(int ,int ,int ,int ,int );//检查是否出现有人名次相同的函数，出现返回一，没出现返回0
    int A,B,C,D,E;//五个参赛者
    //每名选手都有从第一到第五，五种情况
    //循环嵌套，让每个选手从1开始到5，检查每个人的描述是否是一半对一半错
    for(A=1;A<6;A++)
    {
        for(B=1;B<6;B++)
        {
            for(C=1;C<6;C++)
            {
                for(D=1;D<6;D++)
                {
                    for(E=1;E<6;E++)
                    {
                        if(DescribeIsHalfCorrect(B==2,A==3))//A的描述
                        {
                            if(DescribeIsHalfCorrect(B==2,E==4))//B的描述
                            {
                                if(DescribeIsHalfCorrect(C==1,D==2))//C的描述
                                {
                                    if(DescribeIsHalfCorrect(C==5,D==3))//D的描述
                                    {
                                        if(DescribeIsHalfCorrect(E==4,A==1))//E的描述
                                        {
                                            if(!IsReapt(A,B,C,D,E))//符合每个人描述一半对的情况且无重复
                                            {
                                                printf("A:第%d名\nB:第%d名\nC:第%d名\nD:第%d名\nE:第%d名\n",A,B,C,D,E);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
int IsReapt(int a,int b,int c,int d,int e)
{
    if(a!=b&&a!=c&&a!=d&&a!=e
    &&b!=c&&b!=d&&b!=e
    &&c!=d&&c!=e
    &&d!=e)//无重复情况
    return 0;
    else
        return 1;
}*/
//8
/*
#include "stdio.h"
//三个描述为真
#define DescribeIsCorrect(X,Y,Z) ((X)==1&&(Y)==1&&(Z)==1)==1
//一个描述为假
#define DescribeIsError(E) ((E)==0)==1
//第三个宏定义把前三个条件看成真的
#define FormerThreeIsCorrect(X,Y,Z,E) DescribeIsCorrect(X,Y,Z)&&DescribeIsError(E)
int main()
{
    int A,B,C,D;//四个人，谁是好人谁等于1
    //循环嵌套，每个人都有是否是凶手两种情况
    //先让四个人都从好人（1）开始，再转到0
    for(A=1;A>-1;A--)
    {
        for(B=1;B>-1;B--)
        {
            for(C=1;C>-1;C--)
            {
                for(D=1;D>-1;D--)
                {
                    if(FormerThreeIsCorrect(A!=0,C==0,D==0,D!=0)//D错
                    || FormerThreeIsCorrect(A!=0,C==0,D!=0,D==0)//C错
                    || FormerThreeIsCorrect(A!=0,D==0,D!=0,C==0)//B错
                    || FormerThreeIsCorrect(C==0,D==0,D!=0,A!=0))//A错
                    {
                        if(A==0)
                            printf("A是凶手\n");
                        else if(B==0)
                            printf("B是凶手\n");
                        else if(C==0)
                            printf("C是凶手\n");
                        else
                            printf("D是凶手\n");
                    }

                }
            }
        }
    }
    return 0;
}*/
#include "stdio.h"
int main()
{
    //4个人中只有一个人是罪犯，则从A开始，假设当前的人是罪犯，循环到D
    //每次循环中判断4个人的描述是否是三个对一个错
    for (char murder = 'A'; murder <='D' ; ++murder)
    {
        if(((murder!='A')+(murder=='C')+(murder=='D')+(murder!='D'))==3)
            printf("%c是凶手\n",murder);
    }
    return 0;
}