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
//��������Ƿ�Ϊ��
bool ListisEmpty(ListNode* pHead)
{
    assert(pHead);
    return pHead->_next==pHead;
}
//��������ͷ�ڵ�
ListNode* ListCreat()
{
    ListNode *head= BuyNode(-1);
    head->_next=head;
    head->_prev=head;
    return head;
}
//��ӡ����
void ListPrint(ListNode* pHead)
{
    assert(pHead);

    printf("guard<==>");
    ListNode *plist=pHead->_next;//plist��������
    while (plist!=pHead)//�ص�����ͷ�ڵ����
    {
        printf("%d<==>",plist->_data);
        plist=plist->_next;
    }
    printf("guard\n");//��־�ֻص�ͷ�ڵ�
}
//��������
void ListDestroy(ListNode* pHead)
{
    assert(pHead);

    //���������ͷſռ���Ҫ����ָ��
    //һ��ָ����ǰ��һ���������ں�
    //�ͷ�ǰһ��ָ������ݣ����ƶ�ǰһ��ָ�뵽��һ��ָ���λ��
    //��һ��ָ�����
    ListNode *plist=pHead->_next;
    while (plist!=pHead)
    {
        ListNode *next=plist->_next;
        free(plist);
        plist=next;
    }
    free(pHead);//����ͷ�ͷ�ڵ�
}
// ˫������β��
void ListPushBack(ListNode* pHead, LTDataType x)
{
    assert(pHead);
    //���淨
    ListNode *newnode= BuyNode(x);
    ListNode *tail=pHead->_prev;
    newnode->_next=pHead;
    newnode->_prev=tail;

    tail->_next=newnode;
    pHead->_prev=newnode;
}
// ˫������βɾ
void ListPopBack(ListNode* pHead)
{
    assert(pHead);

    ListNode *tail=pHead->_prev;//�ҵ�β�ڵ�
    tail->_prev->_next=pHead;//β�ڵ��ǰ���ڵ��nextָ��ͷ�ڵ�
    pHead->_prev=tail->_prev;//ͷ�ڵ�ǰ��ָ��tail��ǰ��
    free(tail);
}
// ˫������ͷ��
void ListPushFront(ListNode* pHead, LTDataType x)
{
    assert(pHead);
    ListNode *newnode= BuyNode(x);
    newnode->_next=pHead->_next;
    newnode->_prev=pHead;
    pHead->_next->_prev=newnode;
    pHead->_next=newnode;
}
// ˫������ͷɾ
void ListPopFront(ListNode* pHead)
{
    assert(pHead);
    ListNode *target=pHead->_next;
    target->_next->_prev=pHead;
    pHead->_next=target->_next;
    free(target);
}


