#include "stdio.h"
struct ListNode{
    int val;
    struct ListNode *next;
};
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
{
    //如果任何一个链表为空,返回另一个非空的链表
    if(list1==NULL||list2==NULL)
    {
        return list1==NULL?list2:list1;
    }

    struct ListNode* head=NULL,* tail=NULL;
    while (list1&&list2)
    {
        //谁小就把谁接入新链表
        if(list1->val<=list2->val)
        {
            if(tail==NULL)
            {
                head=tail=
            }
        }
    }

}