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
}Def;//ѡ�ֵ������������ͣ�Name�������Ķ���rank����������
typedef struct J{
    int Rank;
    Def Definate[2];
}Joiner;//ѡ���������ͣ�Rank��ѡ��������
// Definate��2����ÿ��ѡ������������
int main()
{
    void DEF(Joiner*JOINER,char Name1,int Rank1,char Name2,int Rank2);//ѡ��������������ѡ�����ĵ�ַ������������������Ϊ����
    int IsConflict()
    Joiner A,B,C,D,E;//�������ѡ��,��ʱĬ�����ѡ��Rank��Ϊ0
    //5�˵�����
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
    void PrintTriA();//��ӡ�������
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
//�����������if������̫��,Ԥ�����õĺ궨��
// ÿ��������һ��Եĺ궨�壬����X,Y�ֱ�Ϊ����
#define DescribeIsHalfCorrect(X,Y) ((X)==1&&(Y)==0)||((X)==0&&(Y)==1)
int main()
{
    int IsReapt(int ,int ,int ,int ,int );//����Ƿ��������������ͬ�ĺ��������ַ���һ��û���ַ���0
    int A,B,C,D,E;//���������
    //ÿ��ѡ�ֶ��дӵ�һ�����壬�������
    //ѭ��Ƕ�ף���ÿ��ѡ�ִ�1��ʼ��5�����ÿ���˵������Ƿ���һ���һ���
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
                        if(DescribeIsHalfCorrect(B==2,A==3))//A������
                        {
                            if(DescribeIsHalfCorrect(B==2,E==4))//B������
                            {
                                if(DescribeIsHalfCorrect(C==1,D==2))//C������
                                {
                                    if(DescribeIsHalfCorrect(C==5,D==3))//D������
                                    {
                                        if(DescribeIsHalfCorrect(E==4,A==1))//E������
                                        {
                                            if(!IsReapt(A,B,C,D,E))//����ÿ��������һ��Ե���������ظ�
                                            {
                                                printf("A:��%d��\nB:��%d��\nC:��%d��\nD:��%d��\nE:��%d��\n",A,B,C,D,E);
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
    &&d!=e)//���ظ����
    return 0;
    else
        return 1;
}*/
//8
/*
#include "stdio.h"
//��������Ϊ��
#define DescribeIsCorrect(X,Y,Z) ((X)==1&&(Y)==1&&(Z)==1)==1
//һ������Ϊ��
#define DescribeIsError(E) ((E)==0)==1
//�������궨���ǰ���������������
#define FormerThreeIsCorrect(X,Y,Z,E) DescribeIsCorrect(X,Y,Z)&&DescribeIsError(E)
int main()
{
    int A,B,C,D;//�ĸ��ˣ�˭�Ǻ���˭����1
    //ѭ��Ƕ�ף�ÿ���˶����Ƿ��������������
    //�����ĸ��˶��Ӻ��ˣ�1����ʼ����ת��0
    for(A=1;A>-1;A--)
    {
        for(B=1;B>-1;B--)
        {
            for(C=1;C>-1;C--)
            {
                for(D=1;D>-1;D--)
                {
                    if(FormerThreeIsCorrect(A!=0,C==0,D==0,D!=0)//D��
                    || FormerThreeIsCorrect(A!=0,C==0,D!=0,D==0)//C��
                    || FormerThreeIsCorrect(A!=0,D==0,D!=0,C==0)//B��
                    || FormerThreeIsCorrect(C==0,D==0,D!=0,A!=0))//A��
                    {
                        if(A==0)
                            printf("A������\n");
                        else if(B==0)
                            printf("B������\n");
                        else if(C==0)
                            printf("C������\n");
                        else
                            printf("D������\n");
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
    //4������ֻ��һ�������ﷸ�����A��ʼ�����赱ǰ�������ﷸ��ѭ����D
    //ÿ��ѭ�����ж�4���˵������Ƿ���������һ����
    for (char murder = 'A'; murder <='D' ; ++murder)
    {
        if(((murder!='A')+(murder=='C')+(murder=='D')+(murder!='D'))==3)
            printf("%c������\n",murder);
    }
    return 0;
}