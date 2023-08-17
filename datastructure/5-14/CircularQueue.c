//循环队列
#include "stdbool.h"
#include "stdlib.h"
#include "stdio.h"
#define null NULL
typedef int CQDatatype;
typedef struct {
    CQDatatype * data;
    int front;//队头
    int rear;//队尾
    int size;//队的规模
} MyCircularQueue;
bool myCircularQueueIsFull(MyCircularQueue* obj);
bool myCircularQueueIsEmpty(MyCircularQueue* obj);

MyCircularQueue* myCircularQueueCreate(int k)
{
    MyCircularQueue *obj=(MyCircularQueue*) malloc(sizeof (MyCircularQueue));

    obj->size=k;
    //多开一个空间
    obj->data=(CQDatatype*) malloc(sizeof (CQDatatype)*(k+1));
    obj->front=obj->rear=0;
    return obj;
}

bool myCircularQueueEnQueue(MyCircularQueue* obj, int value)
{
    if(myCircularQueueIsFull(obj))
        return false;//如果队列满，则返回false


    obj->data[obj->rear]=value;
    obj->rear++;
    //使下标索引形成循环
    obj->rear%=(obj->size+1);
    return true;
}

bool myCircularQueueDeQueue(MyCircularQueue* obj)
{
    if(myCircularQueueIsEmpty(obj))
        return false;

    obj->front++;
    obj->front%=(obj->size+1);


    return true;
}

int myCircularQueueFront(MyCircularQueue* obj)
{
    if(myCircularQueueIsEmpty(obj))
        return -1;

    return obj->data[obj->front];
}

int myCircularQueueRear(MyCircularQueue* obj)
{
    if(myCircularQueueIsEmpty(obj))
        return -1;

    return obj->data[(obj->rear+obj->size)%(obj->size+1)];
}

bool myCircularQueueIsEmpty(MyCircularQueue* obj)
{
    return obj->front==obj->rear;
}

bool myCircularQueueIsFull(MyCircularQueue* obj)
{
    return (obj->rear+1)%(obj->size+1)==obj->front;
}

void myCircularQueueFree(MyCircularQueue* obj)
{
    free(obj->data);
    free(obj);
}

/**
 * Your MyCircularQueue struct will be instantiated and called as such:
 * MyCircularQueue* obj = myCircularQueueCreate(k);
 * bool param_1 = myCircularQueueEnQueue(obj, value);

 * bool param_2 = myCircularQueueDeQueue(obj);

 * int param_3 = myCircularQueueFront(obj);

 * int param_4 = myCircularQueueRear(obj);

 * bool param_5 = myCircularQueueIsEmpty(obj);

 * bool param_6 = myCircularQueueIsFull(obj);

 * myCircularQueueFree(obj);
*/