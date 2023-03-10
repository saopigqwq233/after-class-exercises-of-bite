//1
/*
#include "stdio.h"
void InPut(int arr[][10],int n,int m);//输入矩阵
int IsEqual(int arr1[][10],int arr2[][10],int n,int m);//判断nxm的矩阵是否相等
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int arr1[10][10],arr2[10][10];
    InPut(arr1,n,m);
    InPut(arr2,n,m);
    if(IsEqual(arr1,arr2,n,m))
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
void InPut(int arr[][10],int n,int m)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            scanf("%d",&arr[i][j]);
        }
    }
}
int IsEqual(int arr1[][10],int arr2[][10],int n,int m)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if(arr1[i][j]!=arr2[i][j])
                return 0;
        }
    }
    return 1;
}*/
//2
/*VERSION1
#include "stdio.h"
#include "stdlib.h"
//链表解决
typedef struct node{
    int data;
    struct node* next;
}Node;
Node *CreatNode(int data);//创建节点
void DeleteNode(Node* head,int target);//删除目标节点
void PrintList(Node* head);//打印序列
int main()
{
    Node *Head,*Tail;//头节点和尾节点
    Node *NewNode;//新节点
    int len;//序列长度
    scanf("%d",&len);//输入序列长度
    int data;
    for (int i = 0; i < len; ++i)//输入序列
    {
        scanf("%d",&data);
        NewNode= CreatNode(data);
        if(Head==NULL)//输入的第一个数
        {
            Head=Tail=NewNode;
        }
        else//其它数
        {
            Tail->next=NewNode;
            Tail=NewNode;
        }
    }
    int Target;
    scanf("%d",&Target);
    DeleteNode(Head,Target);
    PrintList(Head);
    return 0;
}
Node *CreatNode(int data)
{
    Node *new=(Node*) malloc(sizeof (Node));
    new->data=data;
    new->next=NULL;
    return new;
}
void DeleteNode(Node* head,int target)
{
    if(head->data==target)//头节点的元素就是目标
    {
        Node *target=head;
        head=target->next;
        free(target);
    }
    for(;head->next!=NULL;head=head->next)
    {
        if(head->next->data==target)//下一个节点的元素是目标
        {
            Node *target=head->next;//目标节点
            head->next=target->next;
            free(target);
        }
    }
}
void PrintList(Node* head)
{
    for(;head!=NULL;head=head->next)
    {
        printf("%d ",head->data);
    }
}*/
//2数组赋值
/*version2
#include "stdio.h"
int main()
{
    //两个数组
    int arr1[50],arr2[50];
    //序列长度
    int len;
    scanf("%d",&len);
    for (int i = 0; i < len; ++i)
    {
        scanf("%d",&arr1[i]);
    }
    int target;
    scanf("%d",&target);
    int k=0;//arr2的索引
    for (int i = 0; i < len; ++i)
    {
        if(arr1[i]!=target)
        {
            arr2[k]=arr1[i];
            k++;
        }
        else
        {

        }
    }
    for (int i = 0; i < k; ++i)//k-1就是arr2的最后一个arr1中不是target的数的索引
    {
        printf("%d ",arr2[i]);
    }
    return 0;
}*/
//3
/*
#include "stdio.h"
int Days(int Year,int Month);//返回有多少天
int main()
{
    int year,month;
    while (scanf("%d %d",&year,&month)!=EOF)
    {
        printf("%d\n", Days(year, month));
    }
    return 0;
}
int Days(int Year,int Month)
{
    if(Month==2)
    {
        if ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0))
            return 29;
        else
            return 28;
    }
    else
    {
        //索引即使月份
        int Day[13]={0,31,29,31,30,31,30,31,
                      31,30,31,30,31};
        return Day[Month];
    }
}

*/
//4
#include "stdio.h"
//双11打折后价格
#define double11(X) ((X)*0.7)
//双12打折后价格
#define double12(X) ((X)*0.8)
//判断优惠后价格X是否小于0
#define biggerthan0(X) (((X)>0)?X:0)
typedef struct {
    float price;//价格
    int month;
    int day;
    int have;
}Info;
int main()
{
    Info XiaoMin;
    scanf("%f %d %d %d",&XiaoMin.price,&XiaoMin.month,&XiaoMin.day,&XiaoMin.have);
    int money;
    if(XiaoMin.month==11&&XiaoMin.day==11)
    {
        printf("%.2f", biggerthan0(double11(XiaoMin.price)-50*XiaoMin.have));
    }
    else if(XiaoMin.month==12&&XiaoMin.day==12)
    {
        printf("%.2f", biggerthan0(double12(XiaoMin.price)-50*XiaoMin.have));
    }
    else
        printf("%.2f",XiaoMin.price);
}