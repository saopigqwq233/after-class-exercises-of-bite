#include "stdlib.h"
struct ListNode {
       int val;
        struct ListNode *next;
};
struct ListNode* removeElements(struct ListNode* head, int val)
{
//处理链表为空的情况
    if(head==NULL)
        return NULL;

//处理头节点就是目标节点的情况
    while (head != NULL && head->val==val)
    {
        struct ListNode*tmp=head;
        head=head->next;
        free(tmp);
    }
    if(head==NULL)
        return NULL;
//链表不为空
//pf指向相邻节点的前一个
//pl指向后一个
    struct ListNode* pf=head;
    struct ListNode* pl=head->next;

//遍历链表，直到后一个指针指向NULL结束
    while (pl!=NULL)
    {
        //先检查后一个指针
        if(pl->val==val)//找到目标节点
        {
            pf->next=pl->next;//目标节点的前一个节点
            free(pl);
            pl=pf->next;
        }
        else
        {
            pf=pl;
            pl=pl->next;
        }
    }
    return head;
}