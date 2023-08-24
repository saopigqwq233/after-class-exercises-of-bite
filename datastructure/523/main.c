#include "BinaryTree.h"
int main()
{
    char a[]="ABD##E#H##CF##G##";
    int b=0;
    BTNode *root= BinaryTreeCreate(a,10,&b);
    printf("前序遍历：");
    BinaryTreePrevOrder(root);
    printf("\n");
    printf("层序遍历：");
    BinaryTreeLevelOrder(root);

    printf("二叉树层高：%d ", BTHeight(root));
    return 0;
}
