//3
/*#include <stdio.h>
int main()
{
    int a=10,b=9;
    printf("ת��ǰa=%d��b=%d\n",a,b);
    a=a^b;
    b=a^b;//b��ʱ�Ѿ���ԭ��a��ֵ
    a=a^b;
    printf("ת����a=%d��b=%d",a,b);
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
    static int Wei=0;//Wei��ʾ���˵ڼ�λ���ӵ�λ����λ
    Wei++;
    if(Wei<=32)//Wei����32λ2����������
    {
        if((n&1)==1)//��ǰλ��1
        {
            return 1+ NumberOf1(n>>1);//����1+��λ��1�ĸ���
        }
        else //��ǰλ����1
            return 0+ NumberOf1(n>>1);//����0+��λ��1�ĸ���
    }
    else//Wei�Ѿ�����32λ
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


    printf("ԭ�������ƣ�");
    for (int i = 0; i < 32; ++i)
    {
        printf("%d",n[i]);
    }
    printf("\n");


    printf("����λ�����ƣ�");
    for (int i = 1;i<32 ; ++i) //��ӡ����λ��
    {
        if(i%2==1)
        printf("%d",n[i]);
    }
    printf("\n");


    printf("ż��λ�����ƣ�");
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
    int NumberOf1(int );//����֮ǰ�Ķ��ٸ�1����
    int m,n;
    scanf("%d %d",&m,&n);
    printf("%d", NumberOf1(m^n));//m,n��ĳһλ����ͬ��Ϊ0����ͬΪ1
    return 0;
}
int NumberOf1(int n)
{
    static int Wei=0;//Wei��ʾ���˵ڼ�λ���ӵ�λ����λ
    Wei++;
    if(Wei<=32)//Wei����32λ2����������
    {
        if((n&1)==1)//��ǰλ��1
        {
            return 1+ NumberOf1(n>>1);//����1+��λ��1�ĸ���
        }
        else //��ǰλ����1
            return 0+ NumberOf1(n>>1);//����0+��λ��1�ĸ���
    }
    else//Wei�Ѿ�����32λ
        return 0;
}