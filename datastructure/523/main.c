#include "BinaryTree.h"
int main()
{
    char a[]="ABD##E#H##CF##G##";
    int b=0;
    BTNode *root= BinaryTreeCreate(a,10,&b);
    printf("ǰ�������");
    BinaryTreePrevOrder(root);
    printf("\n");
    printf("���������");
    BinaryTreeLevelOrder(root);

    printf("��������ߣ�%d ", BTHeight(root));
    return 0;
}
