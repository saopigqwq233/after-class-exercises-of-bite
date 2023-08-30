#include <stdio.h>
#include "stdlib.h"
#include "stdbool.h"
struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};
//法一：递归法
/*void PreOrder(struct TreeNode*root,int *arr,int* returnSize)
{
    if(root==NULL)
        return;
    arr[*returnSize]=root->val;
    *returnSize++;
    PreOrder(root->left,arr,returnSize);
    PreOrder(root->right,arr,returnSize);
}
int* preorderTraversal(struct TreeNode* root, int* returnSize)
{
    *returnSize=0;
    int *ret=(int*)malloc(sizeof (int )*100);
    PreOrder(root,ret,returnSize);
    return ret;
}*/
//法二：迭代法
int* preorderTraversal(struct TreeNode* root, int* returnSize)
{
    for(struct TreeNode* cur_root=root;cur_root!=NULL;)
    {




    }
}