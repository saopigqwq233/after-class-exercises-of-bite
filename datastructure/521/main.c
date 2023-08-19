#include "Heap.h"
//大堆
void Swap(HPDataType* a,HPDataType* b)
{
    HPDataType tmp=*a;
    *a=*b;
    *b=tmp;
}
// 堆的构建
void HeapCreate(Heap* hp, HPDataType* a, int n)
{
    assert(hp);
    assert(a);
    a=(HPDataType*) malloc(sizeof (HPDataType)*n);
    hp=(Heap*) malloc(sizeof (Heap));
    hp->_a=a;
    hp->_size=0;
    hp->_capacity=n;
}
// 堆的销毁
void HeapDestory(Heap* hp)
{
    assert(hp);
    assert(!HeapEmpty(hp));

    free(hp->_a);
    free(hp);
}

// 堆的插入
void HeapPush(Heap* hp, HPDataType x)
{
    assert(hp);
    if(hp->_size==hp->_capacity)//堆满扩容
    {
        int newcapacity=hp->_capacity*2;
        HPDataType *newHeap=(HPDataType*) realloc(hp->_a,sizeof (HPDataType)*newcapacity);
        hp->_capacity=newcapacity;
        hp->_a=newHeap;
    }

    hp->_a[hp->_size]=x;
    hp->_size++;

    AdjustUp(hp->_a,hp->_size-1);//调整堆
}
// 堆的删除
void HeapPop(Heap* hp)
{
    assert(hp);
    assert(!HeapEmpty(hp));

    //把堆顶和最后的元素互换
    Swap(&hp->_a[0],&hp->_a[hp->_size-1]);

    //删除最后的元素
    hp->_size--;

    //向下调整堆
    AdjustDown(hp->_a,hp->_size,0);
}
// 取堆顶的数据
HPDataType HeapTop(Heap* hp)
{
    assert(hp);
    assert(!HeapEmpty(hp));

    return hp->_a[0];
}
// 堆的数据个数
int HeapSize(Heap* hp)
{
    assert(hp);
    return hp->_size;
}
// 堆的判空
int HeapEmpty(Heap* hp)
{
    assert(hp);
    return hp->_size==0;
}
void AdjustUp(HPDataType* a,int child)
{
    int parent=(child-1)/2;
    while (child>0)
    {
        if(a[child]>a[parent])
        {
            Swap(&a[child],&a[parent]);


            child=parent;
            parent=(child-1)/2;
        }
    }
}
void AdjustDown(HPDataType* a,int size,int parent)
{
    int child=parent*2+1;//假设更小的是左孩子
    while (child<size)
    {
        if (child + 1 < size && a[child] > a[child + 1])//右孩子存在且有孩子更小
        {
            child++;//转到更小的右孩子
        }
        //child此时时最小的孩子
        if (a[parent] > a[child])//双亲比孩子小，则换位
        {
            Swap(&a[parent], &a[child]);
        }
        else//双亲比孩子大，则退出循环
            break;
    }
}