#include "call.h"
struct TreeNode* invertTree(struct TreeNode* root)
{
    //分治法，交换根节点的两个子树
    if(root==NULL)
        return NULL;
    if(root->left==NULL&&root->right==NULL)//叶子节点
        return root;

    struct TreeNode*tmp=root->left;
    root->left=root->right;
    root->right=tmp;
    invertTree(root->left);
    invertTree(root->right);
    return root;
}