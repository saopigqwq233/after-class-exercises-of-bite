#include "stdlib.h"
struct ListNode {
      int val;
      struct ListNode *next;
  };

struct ListNode* reverseList(struct ListNode* head)//head可以看作当前节点
{
    //递归法需要将新头节点返回
    //需要先递归至原链表最后一个节点
    //如果从按原链表顺序从前往后更改指针指向会是链表断开
    if(head==NULL||head->next==NULL)
        return head;
    else
    {
        struct ListNode* newhead= reverseList(head->next);
        head->next->next=head;//需要将当前节点的下一个节点的指针域指向自己
        head->next=NULL;
        return newhead;
    }
}