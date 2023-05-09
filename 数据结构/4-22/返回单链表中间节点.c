#include "stdlib.h"
struct ListNode {
    int val;
    struct ListNode *next;
};
struct ListNode* middleNode(struct ListNode* head)
{
    //快慢指针
    struct ListNode*fast=head;
    struct ListNode*slow=head;
    while (fast!=NULL&&fast->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next;
        fast=fast->next;
    }
    return slow;
}