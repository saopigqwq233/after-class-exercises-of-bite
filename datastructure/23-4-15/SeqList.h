#pragma once
#include "stdio.h"
#include "stdlib.h"
#include "assert.h"

typedef int SLDateType;//使  int 为顺序表存储数据类型
typedef struct SeqList{
    SLDateType *a;//动态存储数据的数组
    int size;//顺序表大小
    int capacity;//顺序表容量
}SeqList;


void SeqListInit(SeqList* ps);//初始化一个顺序表
void SeqListDestroy(SeqList* ps);//销毁一个顺序表

void SeqListPrint(SeqList* ps);//打印表元素
void SeqListPushBack(SeqList* ps, SLDateType x);//数据尾插
void SeqListPushFront(SeqList* ps, SLDateType x);//数据头插
void SeqListPopFront(SeqList* ps);//头删
void SeqListPopBack(SeqList* ps);//尾删

// 顺序表查找
int SeqListFind(SeqList* ps, SLDateType x);
// 顺序表在pos位置插入x
void SeqListInsert(SeqList* ps, int pos, SLDateType x);
// 顺序表删除pos位置的值
void SeqListErase(SeqList* ps, int pos);

void SeqListInit(SeqList* ps)
{
    ps=(SeqList*) malloc(sizeof (SeqList));
}