//
// Created by liu15 on 2023/8/19.
//

#ifndef INC_521_HEAP_H
#define INC_521_HEAP_H
#include <stdio.h>
#include "stdbool.h"
#include "stdlib.h"
#include "assert.h"
#include "math.h"
#include "time.h"
#define null NULL
typedef int HPDataType;
typedef struct Heap
{
    HPDataType* _a;
    int _size;
    int _capacity;
}Heap;

void HeapCreate(Heap* hp, HPDataType* a, int n);
// 堆的销毁
void HeapDestory(Heap* hp);
// 堆的插入
void HeapPush(Heap* hp, HPDataType x);
// 堆的删除
void HeapPop(Heap* hp);
// 取堆顶的数据
HPDataType HeapTop(Heap* hp);
// 堆的数据个数
int HeapSize(Heap* hp);
// 堆的判空
int HeapEmpty(Heap* hp);

void Swap(HPDataType* a,HPDataType* b);

void AdjustUp(HPDataType* a,int child);//向上调整
void AdjustDown(HPDataType*a,int size,int parent);//向下调整

#endif //INC_521_HEAP_H
