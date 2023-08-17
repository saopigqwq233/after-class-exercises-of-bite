#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"
#include "assert.h"
#define null NULL

typedef int QDatatype;
//队列节点
typedef struct QueueNode{
    QDatatype data;//队列数据
    struct QueueNode* next;
}QueueNode;
//队列
typedef struct Queue{
    QueueNode *phead;
    QueueNode *ptail;
    int size;
}Queue;

void QueueInit(Queue* pq);//队列初始化
void QueueDestroy(Queue* pq);//队列销毁

void QueuePush(Queue* pq,QDatatype x);//入队尾
void QueuePop(Queue* pq);//出队头

QDatatype QueueFront(Queue* pq);//队头元素
QDatatype QueueBack(Queue* pq);//队尾元素
int QueueSize(Queue* pq);//队长度
bool QueueEmpty(Queue*pq);//队空
void QueueInit(Queue* pq)//队列初始化
{
    assert(pq);
    pq->phead=null;
    pq->ptail=null;
    pq->size=0;
}
void QueueDestroy(Queue* pq)//队列销毁
{
    assert(pq);
    QueueNode *cur=pq->phead;
    while (cur)//指针cur和next遍历队列，当cur到null时说明到队尾
    {
        QueueNode *next=cur->next;
        free(cur);
        cur=next;
    }
    //队列置空
    pq->phead=pq->ptail=null;
    pq->size=0;
}

void QueuePush(Queue* pq,QDatatype x)//入队尾
{
    assert(pq);
    QueueNode *newNode=(QueueNode*) malloc(sizeof (QueueNode));
    if(newNode==null)//malloc失败
    {
        perror("malloc error\n");
        return;
    }
    //创建新节点
    newNode->data=x;
    newNode->next=null;

    //加入链式结构
    if(pq->phead==NULL)
    {
        pq->phead=pq->ptail=newNode;
    }
    else
    {
        pq->ptail->next=newNode;//将新节点接入队尾
        pq->ptail=newNode;//刷新尾节点
    }
    pq->size++;
}
void QueuePop(Queue* pq)//出队头
{
    assert(pq);
    assert(!QueueEmpty(pq));

    //为了避免队列只有一个节点，出队后，phead和ptail变成野指针，需要将phead和ptail置空
    //1.一个节点
    if(pq->phead->next==null)
    {
        free(pq->phead);
        pq->phead=pq->ptail=null;
    }
        //2.两个节点
    else
    {
        QueueNode *tmp=pq->phead->next;
        free(pq->phead);
        pq->phead=tmp;
    }

    //队规模-1
    pq->size--;
}

QDatatype QueueFront(Queue* pq)//队头元素
{
    assert(pq);
    assert(!QueueEmpty(pq));

    return pq->phead->data;
}
QDatatype QueueBack(Queue* pq)//队尾元素
{
    assert(pq);
    assert(!QueueEmpty(pq));

    return pq->ptail->data;
}
int QueueSize(Queue* pq)//队长度
{
    assert(pq);
    return pq->size;
}
bool QueueEmpty(Queue*pq)//队空
{
    assert(pq);

    return pq->size==0;
}


typedef struct {
    Queue q1;
    Queue q2;
} MyStack;


MyStack* myStackCreate()
{
    MyStack* obj=(MyStack*) malloc(sizeof (MyStack));
    QueueInit(&obj->q1);
    QueueInit(&obj->q2);
    return obj;
}

void myStackPush(MyStack* obj, int x)
{
    //总是压入不为空的队列
    if(!QueueEmpty(&obj->q1))
    {
        QueuePush(&obj->q1,x);
    }
    else
    {
        QueuePush(&obj->q2,x);
    }
}

int myStackPop(MyStack* obj)//出栈
{
    //假设q1为空
    Queue *PemptyQ=&obj->q1;
    Queue *PnoemptyQ=&obj->q2;

    //确定空队列与非空队列
    if(!QueueEmpty(&obj->q1))
    {
        PemptyQ=&obj->q2;
        PnoemptyQ=&obj->q1;
    }

    //非空队列将数据转入空队列
    while (QueueSize(PnoemptyQ)>1)
    {
        QueuePush(PemptyQ, QueueFront(PnoemptyQ));
        QueuePop(PnoemptyQ);
    }

    //当只剩下最后一个元素时，将最后的元素“出栈”并返回数值
    int ret= QueueFront(PnoemptyQ);
    QueuePop(PnoemptyQ);

    return ret;
}

int myStackTop(MyStack* obj) //栈顶元素
{
    //找非空的那个队列的尾元素即为栈顶
    if(!QueueEmpty(&obj->q1))//q1非空
    {
        return QueueBack(&obj->q1);
    }
    else
    {
        return QueueBack(&obj->q2);
    }
}

bool myStackEmpty(MyStack* obj)
{
    //如果两个队列都为空，则返回true
    return QueueEmpty(&obj->q1)&& QueueEmpty(&obj->q2);
}

void myStackFree(MyStack* obj)
{
    QueueDestroy(&obj->q1);
    QueueDestroy(&obj->q2);
    free(obj);
}