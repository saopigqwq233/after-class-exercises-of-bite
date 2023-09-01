#include "call.h"
bool issymmetric(struct TreeNode* leave_1,struct TreeNode* leave_2)
{
    //1.对比左右节点
    //2.对比左节点的左子节点和右节点的右子节点
    //     左节点的右子节点和右节点的左子节点
    //算法上形成对称


    //两个都空，则返回正确
    if(leave_1==NULL&&leave_2==NULL)
        return true;

    //如果有一个为空另一个不为空，则返回错
    if(leave_1==NULL||leave_2==NULL)
        return false;

    if(leave_1->val==leave_2->val)
        return issymmetric(leave_1->left,leave_2->right)&&
               issymmetric(leave_1->right,leave_2->left);

    return false;
}
bool isSymmetric(struct TreeNode* root)
{
    return issymmetric(root->left,root->right);
}