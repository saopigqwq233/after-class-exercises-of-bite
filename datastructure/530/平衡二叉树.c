#include "call.h"
int max(int a,int b)
{
    return a>=b?a:b;
}
//法一：从上到下
//1.从上到下遍历每个节点
//2.当前节点的左右子树的高度
//3.判断是否平衡
/*int THeight(struct TreeNode* root)
{
    if(root==NULL)
        return 0;
    return max(THeight(root->left), THeight(root->right))+1;
}
bool isBalanced(struct TreeNode* root)
{

       if(root==NULL)
        return true;

    int leftheight= THeight(root->left);
    int rightheight= THeight(root->right);
    if(fabs(leftheight-rightheight)>1)
        return false;
    else
    {
        return isBalanced(root->left)&& isBalanced(root->right);
    }

}*/
//法二：从下到上
//1.后序遍历每个节点
//2.当前节点的左右子树高度
//3.如果平衡，则返回高度+1
//（平衡）：左右子树平衡&&以该节点为根的树平衡
//4.如果不平衡，返回-1

//5.遍历回根时，如果高度>=0，则说明平衡
int Height(struct TreeNode* root)
{
    if(root==NULL)
        return 0;

    int left_height= Height(root->left);
    int right_height= Height(root->right);

    if(left_height==-1||right_height==-1|| (fabs(left_height-right_height)>1))
        return -1;
    else
    {
        return max(left_height,right_height)+1;
    }
}
bool isBalanced(struct TreeNode* root)
{
    return Height(root)>=0;
}