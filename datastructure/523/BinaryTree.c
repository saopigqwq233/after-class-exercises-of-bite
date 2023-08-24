#include "BinaryTree.h"
#include "Queue.h"
//申请节点
BTNode *BuyNode(BTDataType val)
{
    BTNode *node=(BTNode*) malloc(sizeof (BTNode));
    if(node==NULL)
    {
        perror("malloc error\n");
        return NULL;
    }
    node->_data=val;
    node->_left=node->_right=NULL;
}
// 通过前序遍历的数组"ABD##E#H##CF##G##"构建二叉树
BTNode* BinaryTreeCreate(BTDataType* a, int n, int* pi)
{
    //分治思想，创建当前节点的左右树
    //先根据pi指向值确定当前节点的值
    //在创建该节点的左右树
    //遇到#，说明遇到空树，直接返回NULL
    if(a[*pi]=='#')
    {
        (*pi)++;
        return NULL;
    }
    BTNode *root=(BTNode*) malloc(sizeof (BTNode));
    root->_data=a[*pi];
    (*pi)++;

    root->_left= BinaryTreeCreate(a,n,pi);
    root->_right= BinaryTreeCreate(a,n,pi);

    return root;
}
// 二叉树销毁
void BinaryTreeDestory(BTNode** root)
{
    if(*root==NULL)
        return;

    BinaryTreeDestory(&(*root)->_left);
    BinaryTreeDestory(&(*root)->_right);
    free(*root);
    *root=NULL;
}
// 二叉树节点个数
int BinaryTreeSize(BTNode* root)
{
    if(root==NULL)
        return 0;

    return 1+
    BinaryTreeSize(root->_left)+
    BinaryTreeSize(root->_right);
}
// 二叉树叶子节点个数
int BinaryTreeLeafSize(BTNode* root)
{
    if(root==NULL)
        return 0;
    if(root->_left==NULL&&root->_right==NULL)
        return 1;

    return BinaryTreeLeafSize(root->_left)+
    BinaryTreeLeafSize(root->_right);
}
// 二叉树第k层节点个数
int BinaryTreeLevelKSize(BTNode* root, int k)
{
    assert(k>0);//避免k小于0
    if(k==1)
        return 1;

    return BinaryTreeLevelKSize(root->_left,k-1)+
    BinaryTreeLevelKSize(root->_right,k-1);
}

// 二叉树查找值为x的节点
BTNode* BinaryTreeFind(BTNode* root, BTDataType x)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->_data==x)
        return root;

    //建立存储目标节点的变量
    BTNode *leftfind= BinaryTreeFind(root->_left,x);
    if(leftfind)
        return leftfind;

    BTNode *rightfind= BinaryTreeFind(root->_right,x);
    if(rightfind)
        return rightfind;

    //如果左右都未找到返回NULL
}
// 二叉树前序遍历
void BinaryTreePrevOrder(BTNode* root)
{
    if(root==NULL)
    {
        printf("# ");
        return;
    }

    printf("%c ",root->_data);
    BinaryTreePrevOrder(root->_left);
    BinaryTreePrevOrder(root->_right);
}
// 二叉树中序遍历
void BinaryTreeInOrder(BTNode* root)
{
    if(root==NULL)
    {
        printf("# ");
        return;
    }

    BinaryTreeInOrder(root->_left);
    printf("%c ",root->_data);
    BinaryTreeInOrder(root->_right);
}
// 二叉树后序遍历
void BinaryTreePostOrder(BTNode* root)
{
    if(root==NULL)
    {
        printf("# ");
        return;
    }

    BinaryTreeInOrder(root->_left);
    BinaryTreeInOrder(root->_right);
    printf("%c ",root->_data);
}
// 层序遍历
void BinaryTreeLevelOrder(BTNode* root)
{
    //使用队列
    Queue q;
    QueueInit(&q);
    //第一层root先入队
    if(root)
        QueuePush(&q,root);
    //front存下队头（第一层）
    //再出队打印
    //在入左/右节点
    //左节点（第二层）再出，入左节点的左右节点
    //右节点（第二层）再出，入右节点的左右节点
    //以此类推
    while (!QueueEmpty(&q))
    {
        QDatatype front= QueueFront(&q);
        QueuePop(&q);
        printf("%c ",front->_data);
        if(front->_left)
            QueuePush(&q,front->_left);

        if(front->_right)
            QueuePush(&q,front->_right);
    }
    printf("\n");
}

// 判断二叉树是否是完全二叉树
int BinaryTreeComplete(BTNode* root)
{

}








int BTHeight(BTNode* root)
{
    if(root==NULL)
        return 0;
    int left= BTHeight(root->_left);
    int right= BTHeight(root->_right);

    return (left>=right)?left+1:right+1;
}
