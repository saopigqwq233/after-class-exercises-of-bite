#include <stdio.h>
typedef struct ListNode
{
    int val;
    struct ListNode *next;
}ListNode;
/*int main()
{
    ListNode A,B,C,D,E;
    A.val=1;
    B.val=2;
    C.val=3;
    D.val=4;
    E.val=5;
    A.next=&B;
    B.next=&C;
    C.next=&D;
    D.next=&E;
    E.next=&C;
    ListNode *slow,*fast;
    slow=fast=&A;
    do {
        slow=slow->next;
        fast=fast->next->next;
    } while (slow!=fast);

    return 0;
}*/
struct ListNode *detectCycle(struct ListNode *head)
{
    ListNode *slow,*fast;
    slow=fast=head;
    do {
        if(fast==NULL||fast->next==NULL)
            return NULL;
        slow=slow->next;
        fast=fast->next->next;
    } while (slow!=fast);
    fast=head;
    while (fast!=slow)
    {
        fast=fast->next;
        slow=slow->next;
    }
    return slow;
}