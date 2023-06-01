#include "test.h"
int main()
{
    ListNode *DSlist=ListCreat();
    ListPrint(DSlist);
    printf("≤Â»Î3,4,5\n");
    ListPushBack(DSlist,3);
    ListPushBack(DSlist,4);
    ListPushBack(DSlist,5);
    ListPushFront(DSlist,1);
    ListPopBack(DSlist);
    ListPrint(DSlist);
    ListDestroy(DSlist);
    int a;
    return 0;
}
