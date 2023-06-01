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
//����һ��ֵ��Ϊx�Ľڵ�
ListNode *BuyNode(LTDataType x);
//��������Ƿ�Ϊ��
bool ListisEmpty(ListNode* pHead);

//��������ͷ�ڵ�
ListNode* ListCreat();
//��������
void ListDestroy(ListNode* pHead);
//��ӡ����
void ListPrint(ListNode* pHead);
// ˫������β��
void ListPushBack(ListNode* pHead, LTDataType x);
// ˫������βɾ
void ListPopBack(ListNode* pHead);
// ˫������ͷ��
void ListPushFront(ListNode* pHead, LTDataType x);
// ˫������ͷɾ
void ListPopFront(ListNode* pHead);
// ˫���������
ListNode* ListFind(ListNode* pHead, LTDataType x);
// ˫��������pos��ǰ����в���
void ListInsert(ListNode* pos, LTDataType x);
// ˫������ɾ��posλ�õĽڵ�
void ListErase(ListNode* pos);
/*{
*//*    assert(pos);//�ж�pos�Ƿ�������

    pos->_next->_prev=pos->_prev;//pos�ĺ�̽ڵ��ǰ���ڵ��Ϊpos��ǰ��
    pos->_prev->_next=pos->_next;//pos��ǰ���ڵ�ĺ�̽ڵ��Ϊpos�ĺ��

    free(pos);*//*
}*/

#endif //DLIST_TEST_H
