//1
//�˷��ھ���
/*
#include <stdio.h>
int main()
{
    int left;//������
    int right;//����
    for(left=1;left<10;left++)
    {
        for (right = 1; right <= left; right++)
        {
            printf("%dX%d=%2d ",left,right,left*right);
        }
        printf("\n");
    }
    return 0;
}
*/
//2
//�����ֵ
//��һ
/*
#include "stdio.h"
#define Max(X,Y) (X)>(Y)?X:Y
int main()
{
    int Max_arr(int arry[10],int ,int );
    int input[10];
    for (int i = 0; i < 10; ++i)
    {
        scanf("%d",&input[i]);//����ʮ����
    }
    printf("%d", Max_arr(input,0,10));
    return 0;
}
int Max_arr(int arry[10],int left,int right)
{
    if(left==right-1)
        return Max((arry[left]),(arry[right]));
    else if(left==right)
        return arry[left];
    else
        return Max((Max_arr(arry,left,(left+right)/2)),
                   (Max_arr(arry,(left+right)/2+1,right)));
}*/
//����
/*
#include "stdio.h"
int main()
{
    int input[10];
    for (int i = 0; i < 10; ++i)
    {
        scanf("%d",&input[i]);//����ʮ����
    }
    int output=input[0];
    for (int i = 1; i < 10; ++i)
    {
        if(output<input[i])//����output��ֵ
        {
            output=output+input[i];
            input[i]=output-input[i];
            output=output-input[i];
        }
    }
    printf("%d\n",output);
    return 0;
}*/
//3
//�ݹ�����
/*
#include "stdio.h"
float MarkFunc(float );
int main()
{
    printf("%f", MarkFunc(100));
}
float MarkFunc(float n)
{
    if(n==1)
        return 1;
    else if((int)n%2==0)
        return MarkFunc(n-1)-(1/n);
    else if((int)n%2==1)
        return MarkFunc(n-1)+(1/n);
}*/
//4
/*
#include "stdio.h"
int main()
{
    int ten;//ʮλ��
    int ind;//��λ��
    int num=0;//����9�Ĵ���
    for (int ten = 0; ten < 10; ++ten)
    {
        for (int ind = 0; ind < 10; ++ind)
        {
            if(ten%9==0&&ten!=0)//ʮλ����9
            {
                num++;
            }
            if(ind%9==0&&ind!=0)//��λ��9
            {
                num++;
            }
        }
    }
    printf("%d",num);
    return 0;
}*/
//5
//��������Ϸ
/*
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
void game(void );

int main()
{
    int input=1;
    printf("����1��ʼ��Ϸ������0������Ϸ\n");
    while (input)
    {
        scanf("%d",&input);
        switch (input)
        {
            case 1:
                game();
                break;
            case 0:
                printf("��Ϸ����\n");
                break;
            default:
                printf("�������룬����������->");
        }
    }
    printf("�������\n");
    return 0;
}
void game(void )
{
    srand((unsigned int ) time(NULL));
    printf("��Ϸ��ʼ\n");
    printf("�������Χ1--100\n");
    int random=rand()%100+1;
    int input;
    while (1)
    {
        printf("�������->");
        scanf("%d",&input);
        if(random==input)
        {
            printf("��ϲ��¶���\n");
            break;
        }
        else if(random>input)
        {
            printf("��С�ˣ������԰�\n");
        }
        else if(random<input)
        {
            printf("�´��ˣ������԰�\n");
        }
    }
}*/
//6
#include "stdio.h"
int main()
{
    int array[]={22,33,44,55,66,77};
    int left=0,right=5;//������������ҵ��±�
    int input;
    printf("������Ҫ���ҵ���->");
    scanf("%d",&input);
    while (1)
    {
        int mid=(left+right)/2;
        if(left>right)
        {
            printf("û�ҵ�\n");
            break;
        }
        else if(input==array[mid])
        {
            printf("�ҵ��ˣ��±�Ϊ%d",mid);
            break;
        }
        else if(input>array[mid])
        {
            left=(left+right)/2+1;
        }
        else if(input<array[mid])
        {
            right=(left+right)/2-1;
        }
    }
}