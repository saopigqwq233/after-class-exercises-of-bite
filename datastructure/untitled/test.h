//
// Created by liu15 on 2023/6/1.
//

#ifndef DLIST_TEST_H
#define DLIST_TEST_H
#include "stdlib.h"
#include "stdio.h"
#include "assert.h"
#include "stdbool.h"

typedef int LTDataType;
typedef struct ListNode{
    LTDataType _data;
    struct ListNode* _next;
    struct ListNode* _prev;
}ListNode;
//申请一个值域为x的节点
ListNode *BuyNode(LTDataType x);
//检查链表是否为空
bool ListisEmpty(ListNode* pHead);

//返回链表头节点
ListNode* ListCreat();
//销毁链表
void ListDestroy(ListNode* pHead);
//打印链表
void ListPrint(ListNode* pHead);
// 双向链表尾插
void ListPushBack(ListNode* pHead, LTDataType x);
// 双向链表尾删
void ListPopBack(ListNode* pHead);
// 双向链表头插
void ListPushFront(ListNode* pHead, LTDataType x);
// 双向链表头删
void ListPopFront(ListNode* pHead);
// 双向链表查找
ListNode* ListFind(ListNode* pHead, LTDataType x);
// 双向链表在pos的前面进行插入
void ListInsert(ListNode* pos, LTDataType x);
// 双向链表删除pos位置的节点
void ListErase(ListNode* pos);
/*{
*//*    assert(pos);//判断pos是否有意义

    pos->_next->_prev=pos->_prev;//pos的后继节点的前驱节点改为pos的前驱
    pos->_prev->_next=pos->_next;//pos的前驱节点的后继节点改为pos的后继

    free(pos);*//*
}*/

#endif //DLIST_TEST_H
