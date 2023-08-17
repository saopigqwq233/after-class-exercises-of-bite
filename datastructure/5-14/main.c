/*
#include "stdio.h"
#include "stdlib.h"
#include "assert.h"
#include "stdbool.h"
#define null NULL
typedef int STDatatype;
typedef struct Stack{
    STDatatype *a;
    int top;
    int capacity;
}ST;
void STinit(ST *pst);//初始化
void STDestroy(ST *pst);//销毁栈
void STPush(ST *pst,STDatatype x);//入栈
void STPop(ST *pst);//出栈
STDatatype STTop(ST *pst);//栈顶元素
bool STEmpty(ST *pst);//判断栈是否为空
int STSize(ST *pst);//栈大小


typedef struct{
    ST pushst;
    ST popst;
}MyQueue;
int myQueuePeek(MyQueue* obj);
MyQueue* myQueueCreate()
{
    //申请一块空间
    MyQueue *obj=(MyQueue*) malloc(sizeof (MyQueue));
    //初始化两个栈
    STinit(&obj->pushst);
    STinit(&obj->popst);

    return obj;
}

void myQueuePush(MyQueue* obj, int x)
{
    STPush(&obj->pushst,x);
}

int myQueuePop(MyQueue* obj)
{
    int ret= myQueuePeek(obj);
    STPop(&obj->popst);
    return ret;
}

int myQueuePeek(MyQueue* obj)
{
    //如果popst为空，则先把pushst中的数据转到popsht
    if(STEmpty(&obj->popst))
    {
        while (!STEmpty(&obj->pushst))//pushst栈中为空时停止
        {
            STPush(&obj->popst, STTop(&obj->pushst));//将pushst栈的栈顶元素取出压入pop栈，完成栈元素反转
            STPop(&obj->pushst);
        }
    }
    return STTop(&obj->popst);
}

bool myQueueEmpty(MyQueue* obj)
{
    //pushst和popst都为空则true
    return STEmpty(&obj->pushst)&& STEmpty(&obj->popst);
}

void myQueueFree(MyQueue* obj)
{
    //分别释放pushst和popsh即可
    STDestroy(&obj->pushst);
    STDestroy(&obj->popst);
    //同时释放myQueueCreat中申请的空间
    free(obj);
}

*/
/**
 * Your MyQueue struct will be instantiated and called as such:
 * MyQueue* obj = myQueueCreate();
 * myQueuePush(obj, x);

 * int param_2 = myQueuePop(obj);

 * int param_3 = myQueuePeek(obj);

 * bool param_4 = myQueueEmpty(obj);

 * myQueueFree(obj);
*//*

void STinit(ST *pst)//初始化
{
    assert(pst);
    pst->a=null;
    pst->top=0;//top指向0说明栈为空
    pst->capacity=0;
}
void STDestroy(ST *pst)//销毁栈
{
    assert(pst);
    //释放栈空间并置空
    free(pst->a);
    pst->a=null;
    //top与capacity置0
    pst->capacity=pst->top=0;
}
void STPush(ST *pst,STDatatype x)//入栈
{
    //先判断栈是否满，满则扩容
    if(pst->top==pst->capacity)
    {
        int newcapacity=(pst->capacity==0)?4:(pst->capacity*2);//如果栈空间还未分配，则初始化4个空间
        STDatatype* tmp=(STDatatype*) realloc(pst->a,newcapacity*sizeof (STDatatype));
        //检查空间申请是否成功
        if(tmp==NULL)
        {
            perror("realloc error");
            return;

        }
        pst->a=tmp;
        pst->capacity=newcapacity;
    }
    //入栈操作
    pst->a[pst->top] = x;
    pst->top++;
}
void STPop(ST *pst)//出栈
{
    assert(pst);
    //判断是否为空
    assert(!STEmpty(pst));
    //直接把索引前移动
    pst->top--;
}
STDatatype STTop(ST *pst)//栈顶元素
{
    assert(pst);
    assert(!STEmpty(pst));
    return pst->a[pst->top-1];
}
bool STEmpty(ST *pst)//判断栈是否为空
{
    assert(pst);

    //如果为空返回1，不为空返回0
    //top为0则栈空
    return pst->top==0;
}
int STSize(ST *pst)//栈大小
{
    assert(pst);
    return pst->top;
}*/
