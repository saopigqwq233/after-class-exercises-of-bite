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

    printf("二叉树层高：%d \n", BTHeight(root));

    if(BinaryTreeComplete(root))
        printf("二叉树是完全二叉树\n");
    else
        printf("二叉树不是完全二叉树\n");
    return 0;
}
