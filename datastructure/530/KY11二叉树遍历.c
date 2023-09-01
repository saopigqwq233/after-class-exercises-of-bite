#include "call.h"
struct TreeNode* PreCreatBiTree(char *str,size_t size,int *a);
void InOrder(struct TreeNode* root);
int main()
{
    char str[101];
    while (scanf("%s",str)!=EOF)
    {
        int a=0;
        struct TreeNode*root=PreCreatBiTree(str, strlen(str),&a);
        InOrder(root);
    }
    return 0;
}
struct TreeNode* PreCreatBiTree(char *str,size_t size,int *a)
{
    if(*a>=size||str[*a]=='#')
    {
        (*a)++;
        return NULL;
    }
    struct TreeNode* node=(struct TreeNode*) malloc(sizeof(struct TreeNode));
    node->val=str[*a];
    (*a)++;

    node->left= PreCreatBiTree(str,size,a);
    node->right= PreCreatBiTree(str,size,a);
    return node;
}
void InOrder(struct TreeNode* root)
{
    if(root==NULL)
        return;

    InOrder(root->left);
    printf("%c",root->val);
    InOrder(root->right);
}
