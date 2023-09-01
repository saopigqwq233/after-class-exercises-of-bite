#include "call.h"
//两棵树相同
bool sameTree(struct TreeNode* root_1,struct TreeNode* root_2)
{
    if(root_1==NULL&&root_2==NULL)
        return true;
    if(root_1==NULL||root_2==NULL)
        return false;

    if(root_1->val==root_2->val)
        return sameTree(root_1->left,root_2->left)&&
               sameTree(root_1->right,root_2->right);


    return false;
}

bool isSubtree(struct TreeNode* root, struct TreeNode* subRoot)
{
    //一棵树是另一棵树的子树
    //1.AB两棵树相同
    //2.A树，B树的左子树相同
    //3.A树，B树的右子树相同

    if(root==NULL&&subRoot==NULL)
        return true;

    if(root==NULL||subRoot==NULL)
        return false;

    if(root->val==subRoot->val)
    {
        if(sameTree(root,subRoot))
            return true;
    }
    return isSubtree(root->left,subRoot)|| isSubtree(root->right,subRoot);
}