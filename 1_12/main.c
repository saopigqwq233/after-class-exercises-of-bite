//10
//#include <stdio.h>
//void ClassPrint(int );//�˷��ھ����ӡ����
//int main()
//{
//    int input;
//    scanf("%d",&input);
//    ClassPrint(input);
//    return 0;
//}
//void ClassPrint(int n)
//{
//    if(n==1)
//        printf("%dX%d=%2d\n",n,n,n*n);
//    else
//    {
//        ClassPrint(n-1);
//        for (int i = 1; i <= n; ++i)
//        {
//            printf("%dX%d=%2d ",i,n,i*n);
//        }
//        printf("\n");
//    }
//}
//11
//#include "stdio.h"
//void Swap_int(int *,int *);//������������
//int main()
//{
//    int num1,num2;
//    scanf("%d %d",&num1,&num2);
//    printf("num1=%d num2=%d\n",num1,num2);
//    Swap_int(&num1,&num2);
//    printf("������\n"
//           "num1=%d,num2=%d",num1,num2);
//    return 0;
//}
//void Swap_int(int *a,int *b)
//{
//    int temp;
//    temp=*a;
//    *a=*b;
//    *b=temp;
//}
//12
//#include "stdio.h"
//int IsLeap(int );//�����귵��1�����Ƿ���0
//int main()
//{
//    int input;
//    printf("����Ҫ�����жϵ���ݣ�");
//    scanf("%d",&input);
//    if(IsLeap(input))
//        printf("%d��������",input);
//    else
//        printf("%d�겻������",input);
//    return 0;
//}
//int IsLeap(int year)
//{
//    return ((year%4==0)&&(year%100!=0))||(year%400==0);
//}
//13
//#include "stdio.h"
//int IsEven(int );//����������1�����Ƿ���0
//int main()
//{
//    int num=0;
//    for (int i = 100; i <= 200; ++i)
//    {
//        if(IsEven(i))
//        {   printf("%d ",i);//��ӡ����
//            num++;
//            if(num%5==0)
//                printf("\n");//��ӡ5����������
//        }
//    }
//}
//int IsEven(int n)
//{
//    int flag=0;
//    for (int i = 2; i < n; ++i)
//    {
//        if(n%i==0)
//        {
//            flag=1;//����м���ֿ�������n��������flag=1
//            break;
//        }
//    }
//    if(flag==0)//����
//        return 1;
//    else
//        return 0;
//}
