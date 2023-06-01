#include "test.h"
ListNode *BuyNode(LTDataType x)
{
    ListNode *new=(ListNode*) malloc(sizeof (ListNode));
    if(new==NULL)
    {
        perror("malloc fail");
        return NULL;
    }
    new->_data=x;
    new->_next=new->_prev=NULL;
    return new;
}
//检查链表是否为空
bool ListisEmpty(ListNode* pHead)
{
    assert(pHead);
    return pHead->_next==pHead;
}
//返回链表头节点
ListNode* ListCreat()
{
    ListNode *head= BuyNode(-1);
    head->_next=head;
    head->_prev=head;
    return head;
}
//打印链表
void ListPrint(ListNode* pHead)
{
    assert(pHead);

    printf("guard<==>");
    ListNode *plist=pHead->_next;//plist遍历链表
    while (plist!=pHead)//回到链表头节点结束
    {
        printf("%d<==>",plist->_data);
        plist=plist->_next;
    }
    printf("guard\n");//标志又回到头节点
}
//销毁链表
void ListDestroy(ListNode* pHead)
{
    assert(pHead);

    //遍历链表释放空间需要两个指针
    //一个指针在前，一个紧接着在后
    //释放前一个指针的内容，再移动前一个指针到后一个指针的位置
    //后一个指针后移
    ListNode *plist=pHead->_next;
    while (plist!=pHead)
    {
        ListNode *next=plist->_next;
        free(plist);
        plist=next;
    }
    free(pHead);//最后，释放头节点
}
// 双向链表尾插
void ListPushBack(ListNode* pHead, LTDataType x)
{
    assert(pHead);
    //常规法
    ListNode *newnode= BuyNode(x);
    ListNode *tail=pHead->_prev;
    newnode->_next=pHead;
    newnode->_prev=tail;

    tail->_next=newnode;
    pHead->_prev=newnode;
}
// 双向链表尾删
void ListPopBack(ListNode* pHead)
{
    assert(pHead);

    ListNode *tail=pHead->_prev;//找到尾节点
    tail->_prev->_next=pHead;//尾节点的前驱节点的next指向头节点
    pHead->_prev=tail->_prev;//头节点前驱指向tail的前驱
    free(tail);
}
// 双向链表头插
void ListPushFront(ListNode* pHead, LTDataType x)
{
    assert(pHead);
    ListNode *newnode= BuyNode(x);
    newnode->_next=pHead->_next;
    newnode->_prev=pHead;
    pHead->_next->_prev=newnode;
    pHead->_next=newnode;
}
// 双向链表头删
void ListPopFront(ListNode* pHead)
{
    assert(pHead);
    ListNode *target=pHead->_next;
    target->_next->_prev=pHead;
    pHead->_next=target->_next;
    free(target);
}


