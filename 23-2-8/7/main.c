#include <stdio.h>
int main()
{
    int IsTriangle(int ,int ,int );//判断是否是三角
    void DefTriangle(int ,int ,int );//判断三角类型
    int L1,L2,L3;//三条边长
    while (scanf("%d %d %d",&L1,&L2,&L3)!=EOF)
    {
        if(!IsTriangle(L1,L2,L3))//不是三角形
            printf("Not a triangle!\n");
        else
            DefTriangle(L1,L2,L3);
    }
    return 0;
}
int IsTriangle(int L1,int L2,int L3)
{
    int flag=0;
    if((L1+L2>L3)&&(L1+L3>L2)&&(L2+L3>L1))//满足三角形性质
        flag=1;
    return flag;
}
void DefTriangle(int L1,int L2,int L3)
{
    if(L1==L2&&L1==L3)//等边三角形
        printf("Equilateral triangle!\n");
    else if(L1==L2||L2==L3||L1==L3)
        printf("Isosceles triangle!\n");
    else
        printf("Ordinary triangle!\n");
}