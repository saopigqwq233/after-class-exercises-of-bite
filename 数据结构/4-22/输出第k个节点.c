#include "stddef.h"
struct ListNode {
    	int val;
    struct ListNode *next;
};
struct ListNode* FindKthToTail(struct ListNode* pListHead, int k )
{
    if(k<=0||pListHead==NULL)//倒数第0个或者链表为空
    {
        return NULL;
    }
    //双指针，之间应该相差k-1个节点
    struct ListNode* pf=pListHead;//pf是前一个节点
    struct ListNode* pl=pListHead;//pl是后一个节点
    //先使用循环使pf和pl拉开距离
    while (k--)
    {
        if(pl==NULL)//如果k大于链表长度，直接返回NULL
            return NULL;
        pl=pl->next;
    }
    //pf和pl平移，直到pl指向NULL时，pf指向倒数第k个节点
    while (pl)
    {
        pf=pf->next;
        pl=pl->next;
    }
    return pf;
}