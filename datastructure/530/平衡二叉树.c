#include "call.h"
int max(int a,int b)
{
    return a>=b?a:b;
}

int THeight(struct TreeNode* root)
{
    if(root==NULL)
        return 0;
    return max(THeight(root->left), THeight(root->right))+1;
}
bool isBalanced(struct TreeNode* root)
{
    //法一：从上到下
    //1.从上到下遍历每个节点
    //2.当前节点的左右子树的高度
    //3.判断是否平衡
/*    if(root==NULL)
        return true;

    int leftheight= THeight(root->left);
    int rightheight= THeight(root->right);
    if(fabs(leftheight-rightheight)>1)
        return false;
    else
    {
        return isBalanced(root->left)&& isBalanced(root->right);
    }*/
    //法二：从下到上
    //1.后序遍历每个节点
    //2.
}