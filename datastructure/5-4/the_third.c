#include "stdio.h"
#include "stdlib.h"
struct Node
{
   int val;
   struct Node *next;
   struct Node *random;
};
typedef struct Node Node;
struct Node* copyRandomList(struct Node* head)
{
    if(head==NULL)
        return NULL;
    Node *pl=head;//指向原链表的指针
    //第一步，遍历原链表，在每个节点后拷贝一个新节点
    while (pl!=NULL)
    {
        //节点信息的复制
        Node *newnode=(Node*) malloc(sizeof (Node));
        newnode->val=pl->val;
        newnode->next=pl->next;
        //连接节点
        pl->next=newnode;
        pl=newnode->next;
    }
    //第二布，给拷贝的节点random赋值
    Node *pnode=head;//pnode遍历原节点
    Node *pnewnode=head->next;//pnewnode遍历拷贝节点
    while (pnode!=NULL&&pnewnode!=NULL)
    {
        //A1  A2  B1  B2  C1  C2  D1  D2
        //2是1的拷贝节点
        //假设A1的random指向C1，那么A2的random等于A1的random的next，也就是C2
        if(pnode->random==NULL)
            pnewnode->random=NULL;
        else
            pnewnode->random=pnode->random->next;
        if(pnewnode->next==NULL)
            break;
        pnode=pnewnode->next;
        pnewnode=pnode->next;
    }
    //第三步分离链表
    Node *newhead=head->next;
    Node *newtail=head->next;
    while (newtail!=NULL)
    {
        if(newtail->next==NULL)
            break;
        newtail->next=newtail->next->next;
        newtail=newtail->next;
    }
    return newhead;
}
